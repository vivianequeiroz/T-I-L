import { delay, finalize } from 'rxjs/operators';
import { HttpClient } from '@angular/common/http';
import { Injectable } from '@angular/core';
import { environment } from 'src/environments/environment';
import { Student } from './student';

@Injectable({
  providedIn: 'root',
})
export class StudentsService {
  apiUrl = `${environment.apiUrl}/students`;
  constructor(private http: HttpClient) {}

  save(student: Student) {
    return this.http.post<Student>(this.apiUrl, student).pipe();
  }

  update(id: number, student: Student) {
    return this.http.put<Student>(`${this.apiUrl}/${id}`, student).pipe();
  }

  deleteById(id: number) {
    console.log(`${this.apiUrl}/${id}`);
    return this.http.delete<void>(`${this.apiUrl}/${id}`).pipe();
  }

  findById(id: number) {
    return this.http.get<Student>(`${this.apiUrl}/${id}`).pipe();
  }

  findAll() {
    return this.http.get<Student[]>(this.apiUrl).pipe();
  }
}
