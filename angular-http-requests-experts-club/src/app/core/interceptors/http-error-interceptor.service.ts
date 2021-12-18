import {
  HttpErrorResponse,
  HttpEvent,
  HttpHandler,
  HttpInterceptor,
  HttpRequest,
} from '@angular/common/http';
import { Injectable } from '@angular/core';
import { ToastrService } from 'ngx-toastr';
import { Observable, of, throwError } from 'rxjs';
import { catchError, delay, mergeMap, retryWhen, scan } from 'rxjs/operators';

@Injectable({
  providedIn: 'root',
})
export class HttpErrorInterceptorService implements HttpInterceptor {
  constructor(private toastr: ToastrService) {}

  intercept(
    req: HttpRequest<any>,
    next: HttpHandler
  ): Observable<HttpEvent<any>> {
    console.log('entrou no http error interceptor');
    return next.handle(req).pipe(
      retryWhen((error) => this.retryHandler(error)),
      catchError((error) => this.exceptionHandler(error))
    );
  }

  private exceptionHandler(error: HttpErrorResponse) {
    this.toastr.error(error.message, `${error.status} - ${error.statusText}`);
    return throwError(error);
  }

  private retryHandler(error: Observable<any>) {
    return error.pipe(
      delay(3000),
      mergeMap((error) => {
        if (error.status < 500) {
          return of(error);
        }
        return throwError(error);
      }),
      scan((acumulator, error) => {
        // provide how many times the attempt should occur
        if (acumulator > 5) {
          throw error;
        }
        this.toastr.warning(
          `Attempts made: #${acumulator}`,
          `Retrying the request`
        );
        return ++acumulator;
      }, 1)
    );
  }
}
