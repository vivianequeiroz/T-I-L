import { delay, finalize } from 'rxjs/operators';
import { HttpClient } from '@angular/common/http';
import { Injectable } from '@angular/core';
import { NgxSpinnerService } from 'ngx-spinner';
import { ToastrService } from 'ngx-toastr';
import { environment } from 'src/environments/environment';
import { Student } from './student';

@Injectable({
  providedIn: 'root',
})
export class StudentsService {
  apiUrl = `${environment.apiUrl}/students123`;
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

      finalize(() => this.spinner.hide())
    );
  }

  deleteById(id: number) {
    this.spinner.show();
    console.log(`${this.apiUrl}/${id}`);
    return this.http.delete<void>(`${this.apiUrl}/${id}`).pipe(
      delay(3000),

      finalize(() => this.spinner.hide())
    );
  }

  findById(id: number) {
    this.spinner.show();
    return this.http.get<Student>(`${this.apiUrl}/${id}`).pipe(
      delay(3000),

      finalize(() => this.spinner.hide())
    );
  }

  findAll() {
    this.spinner.show();
    return this.http.get<Student[]>(this.apiUrl).pipe(
      delay(3000),

      finalize(() => this.spinner.hide())
    );
  }
}
