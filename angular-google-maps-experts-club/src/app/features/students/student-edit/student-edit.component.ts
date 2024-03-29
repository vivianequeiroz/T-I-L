import { Component, OnInit } from '@angular/core';
import { ActivatedRoute, Router } from '@angular/router';
import { Student } from '../student';
import { StudentsService } from '../students.service';

@Component({
  selector: 'app-student-edit',
  templateUrl: './student-edit.component.html',
  styleUrls: ['./student-edit.component.css'],
})
export class StudentEditComponent implements OnInit {
  id!: number;
  student?: Student;
  redirectPath = '/students';

  constructor(
    private router: Router,
    private activatedRoute: ActivatedRoute,
    private studentService: StudentsService
  ) {}

  ngOnInit(): void {
    const { source, lat, lng } = this.activatedRoute.snapshot.queryParams;

    this.id = this.activatedRoute.snapshot.params.id;

    if (source && source === 'map') {
      this.redirectPath = '/students/map';
    }

    this.searchStudent().then(() => {
      if (lat && lng) {
        this.student!.lat = parseFloat(lat);
        this.student!.lng = parseFloat(lng);
      }
    });
  }

  onUpdate() {
    this.studentService.update(this.id, this.student!).subscribe(() => {
      this.router.navigateByUrl(this.redirectPath);
    });
  }

  isValid() {
    if (
      !this.student!.name ||
      !this.student!.email ||
      !this.student!.birthday
    ) {
      return false;
    }

    return true;
  }

  private async searchStudent() {
    return this.studentService
      .findById(this.id)
      .toPromise()
      .then((response) => {
        this.student = response;
      })
      .catch(() => {
        this.router.navigateByUrl('/students');
      });
  }
}
