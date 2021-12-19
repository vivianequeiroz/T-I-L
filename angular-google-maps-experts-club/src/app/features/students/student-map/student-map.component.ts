import { StudentsService } from './../students.service';
import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-student-map',
  templateUrl: './student-map.component.html',
  styleUrls: ['./student-map.component.css'],
})
export class StudentMapComponent implements OnInit {
  mapOptions: google.maps.MapOptions = {
    mapTypeId: 'roadmap',
    mapTypeControl: false,
    fullscreenControl: false,
    zoom: 13,
    maxZoom: 16,
    minZoom: 12,
    center: {
      lat: -23.5489,
      lng: -46.6388,
    },
  };

  constructor(private studentService: StudentsService) {}

  ngOnInit(): void {
    this.loadMap();
  }

  private loadMap() {}
}
