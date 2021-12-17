import { HttpClient, HttpHeaders } from '@angular/common/http';
import { Injectable } from '@angular/core';
import { Observable } from 'rxjs';
import { delay, finalize } from 'rxjs/operators';
import { environment } from '../../environments/environment';
import { AuthService } from './auth.service';
import { LoaderService } from './loader.service';

export interface Book {
  id: number;
  title: string;
  author: string;
}

@Injectable({
  providedIn: 'root',
})
export class BooksService {
  private baseUrl = environment.apiUrl;

  constructor(
    private http: HttpClient,
    private auth: AuthService,
    private loader: LoaderService
  ) {}

  getAllBooks(): Observable<Book[]> {
    this.loader.startLoading();
    const headers: HttpHeaders = this.getAuthorizationHeader();

    return this.http
      .get<Book[]>(`${this.baseUrl}/books`, {
        headers,
      })
      .pipe(
        delay(3000), //useful to test slowness
        finalize(() => this.loader.stopLoading())
      );
  }

  getBookById(bookId: number): Observable<Book> {
    this.loader.startLoading();
    const headers: HttpHeaders = this.getAuthorizationHeader();

    return this.http
      .get<Book>(`${this.baseUrl}/books/${bookId}`, {
        headers,
      })
      .pipe(
        delay(3000),
        finalize(() => this.loader.stopLoading())
      );
  }

  createBook(book: Omit<Book, 'id'>): Observable<Book> {
    this.loader.startLoading();
    const headers: HttpHeaders = this.getAuthorizationHeader();

    return this.http
      .post<Book>(`${this.baseUrl}/books`, book, {
        headers,
      })
      .pipe(
        delay(3000),
        finalize(() => this.loader.stopLoading())
      );
  }

  updateBook(book: Book): Observable<Book> {
    const headers: HttpHeaders = this.getAuthorizationHeader();
    return this.http
      .put<Book>(`${this.baseUrl}/books/${book.id}`, book, {
        headers,
      })
      .pipe(
        delay(3000),
        finalize(() => this.loader.stopLoading())
      );
  }

  deleteBookById(bookId: number): Observable<Book> {
    this.loader.startLoading();
    const headers: HttpHeaders = this.getAuthorizationHeader();

    return this.http
      .delete<Book>(`${this.baseUrl}/books/${bookId}`, {
        headers,
      })
      .pipe(
        delay(3000),
        finalize(() => this.loader.stopLoading())
      );
  }

  private getAuthorizationHeader(): HttpHeaders {
    return new HttpHeaders({
      authorization: `Bearer ${this.auth.getAccessToken()}`,
    });
  }
}
