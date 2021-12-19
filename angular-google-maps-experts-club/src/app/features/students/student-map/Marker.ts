import { Student } from '../student';

export interface Marker {
  student: Student;
  options: google.maps.MarkerOptions;
}
