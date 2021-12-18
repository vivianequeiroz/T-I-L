import {
  catchError,
  delay,
  finalize,
  mergeMap,
  retryWhen,
  scan,
} from 'rxjs/operators';
import { HttpClient, HttpErrorResponse } from '@angular/common/http';
import { Injectable } from '@angular/core';
import { NgxSpinnerService } from 'ngx-spinner';
import { ToastrService } from 'ngx-toastr';
import { environment } from 'src/environments/environment';
import { Student } from './student';
import { Observable, of, throwError } from 'rxjs';

@Injectable({
  providedIn: 'root',
})
export class StudentsService {
  apiUrl = `${environment.apiUrl}/students`;
  constructor(
    private http: HttpClient,
    private toastr: ToastrService,
    private spinner: NgxSpinnerService
  ) {}

  save(student: Student) {
    this.spinner.show();
    return this.http.post<Student>(this.apiUrl, student).pipe(
      delay(3000),
      finalize(() => this.spinner.hide())
    );
  }

  update(id: number, student: Student) {
    this.spinner.show();
    return this.http.put<Student>(`${this.apiUrl}/${id}`, student).pipe(
      delay(3000),
      catchError((error) => this.exceptionHandler(error)),
      finalize(() => this.spinner.hide())
    );
  }

  deleteById(id: number) {
    this.spinner.show();
    console.log(`${this.apiUrl}/${id}`);
    return this.http.delete<void>(`${this.apiUrl}/${id}`).pipe(
      delay(3000),
      catchError((error) => this.exceptionHandler(error)),
      finalize(() => this.spinner.hide())
    );
  }

  findById(id: number) {
    this.spinner.show();
    return this.http.get<Student>(`${this.apiUrl}/${id}`).pipe(
      delay(3000),
      catchError((error) => this.exceptionHandler(error)),
      finalize(() => this.spinner.hide())
    );
  }

  findAll() {
    this.spinner.show();
    return this.http.get<Student[]>(this.apiUrl).pipe(
      delay(3000),
      retryWhen((error) => this.retryHandler(error)),
      catchError((error) => this.exceptionHandler(error)),
      finalize(() => this.spinner.hide())
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
