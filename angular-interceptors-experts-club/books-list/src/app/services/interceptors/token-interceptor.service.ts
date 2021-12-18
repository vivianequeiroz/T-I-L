import {
  HttpEvent,
  HttpHandler,
  HttpHeaders,
  HttpInterceptor,
  HttpRequest,
} from '@angular/common/http';
import { Injectable } from '@angular/core';
import { Observable } from 'rxjs';
import { AuthService } from '../auth.service';

@Injectable()
export class TokenInterceptorService implements HttpInterceptor {
  constructor(private auth: AuthService) {}

  intercept(
    req: HttpRequest<any>,
    next: HttpHandler
  ): Observable<HttpEvent<any>> {
    const headers = this.getAuthorizationHeader();
    const newReq = req.clone({ headers }); // to preserve immutability

    console.log(newReq, 'entrou no token interceptor');

    return next.handle(newReq);
  }

  private getAuthorizationHeader(): HttpHeaders {
    return new HttpHeaders({
      authorization: `Bearer ${this.auth.getAccessToken()}`,
    });
  }
}
