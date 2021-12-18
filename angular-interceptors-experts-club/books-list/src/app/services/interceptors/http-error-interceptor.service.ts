import {
  HttpErrorResponse,
  HttpEvent,
  HttpHandler,
  HttpInterceptor,
  HttpRequest,
} from '@angular/common/http';
import { Injectable } from '@angular/core';
import { Router } from '@angular/router';
import { Observable, throwError } from 'rxjs';
import { catchError } from 'rxjs/operators';
import { DialogData } from 'src/app/models/DialogData';
import { AlertService } from '../alert.service';

@Injectable({
  providedIn: 'root',
})
export class HttpErrorInterceptorService implements HttpInterceptor {
  constructor(private alert: AlertService, private router: Router) {}

  intercept(
    req: HttpRequest<any>,
    next: HttpHandler
  ): Observable<HttpEvent<any>> {
    console.log('entrou no http error interceptor');
    return next
      .handle(req)
      .pipe(catchError((error) => this.handleError(error)));
  }

  private handleError(error: HttpErrorResponse) {
    if (error.status === 400) {
      const dialogData: DialogData = {
        status: error.status,
        statusText: error.statusText,
        message: 'Email or password invalid. Try again.',
      };

      this.alert.showError(dialogData).subscribe();
    }

    if (error.status === 401) {
      const dialogData: DialogData = {
        status: error.status,
        statusText: error.statusText,
        message: 'You must be logged in to view the page.',
      };
      this.alert
        .showError(dialogData)
        .subscribe(() => this.router.navigate(['login']));
    }

    return throwError(error);
  }
}
