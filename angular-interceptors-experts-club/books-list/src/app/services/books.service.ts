import { HttpClient, HttpHeaders } from '@angular/common/http';
import { Injectable } from '@angular/core';
import { Observable } from 'rxjs';
import { environment } from '../../environments/environment';
import { AuthService } from './auth.service';

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

  constructor(private http: HttpClient, private auth: AuthService) {}

  getAllBooks(): Observable<Book[]> {
    const headers: HttpHeaders = this.getAuthorizationHeader();

    return this.http.get<Book[]>(`${this.baseUrl}/books`, {
      headers,
    });
  }

  getBookById(bookId: number): Observable<Book> {
    const headers: HttpHeaders = this.getAuthorizationHeader();
    return this.http.get<Book>(`${this.baseUrl}/books/${bookId}`, {
      headers,
    });
  }

  createBook(book: Omit<Book, 'id'>): Observable<Book> {
    const headers: HttpHeaders = this.getAuthorizationHeader();
    return this.http.post<Book>(`${this.baseUrl}/books`, book, {
      headers,
    });
  }

  updateBook(book: Book): Observable<Book> {
    const headers: HttpHeaders = this.getAuthorizationHeader();
    return this.http.put<Book>(`${this.baseUrl}/books/${book.id}`, book, {
      headers,
    });
  }

  deleteBookById(bookId: number): Observable<Book> {
    const headers: HttpHeaders = this.getAuthorizationHeader();
    return this.http.delete<Book>(`${this.baseUrl}/books/${bookId}`, {
      headers,
    });
  }

  private getAuthorizationHeader(): HttpHeaders {
    return new HttpHeaders({
      authorization: `Bearer ${this.auth.getAccessToken()}`,
    });
  }
}
