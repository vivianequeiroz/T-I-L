import {
  HttpEvent,
  HttpHandler,
  HttpInterceptor,
  HttpRequest,
} from '@angular/common/http';
import { Injectable } from '@angular/core';
import { Observable } from 'rxjs';
import { delay, finalize } from 'rxjs/operators';
import { LoaderService } from '../loader.service';

@Injectable()
export class LoaderInterceptorService implements HttpInterceptor {
  constructor(private loader: LoaderService) {}

  intercept(
    req: HttpRequest<any>,
    next: HttpHandler
  ): Observable<HttpEvent<any>> {
    console.log('entrou no loader-interceptor');
    this.loader.startLoading();

    return next.handle(req).pipe(
      delay(3000), //useful to test slowness
      finalize(() => this.loader.stopLoading())
    );
  }
}
