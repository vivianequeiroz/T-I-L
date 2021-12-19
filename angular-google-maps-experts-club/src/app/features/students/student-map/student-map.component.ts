import { StudentsService } from './../students.service';
import { Component, OnInit } from '@angular/core';
import { Marker } from './Marker';
import { Student } from '../student';
import { Router } from '@angular/router';

@Component({
  selector: 'app-student-map',
  templateUrl: './student-map.component.html',
  styleUrls: ['./student-map.component.css'],
})
export class StudentMapComponent implements OnInit {
  markers: Marker[] = [];

  mapCenter = {
    lat: -22.935142495916043,
    lng: -43.19813548085938,
  };

  mapOptions: google.maps.MapOptions = {
    mapTypeId: 'roadmap',
    mapTypeControl: false,
    fullscreenControl: false,
    zoom: 13,
    maxZoom: 16,
    minZoom: 12,
    center: this.mapCenter,
  };

  constructor(
    private studentService: StudentsService,
    private router: Router
  ) {}

  ngOnInit(): void {
    this.loadMap();
  }

  onMapClick(event: google.maps.MapMouseEvent) {
    //console.log(event.latLng.toJSON());
    this.router.navigate(['/students/new'], {
      queryParams: {
        source: 'map',
        lat: event.latLng.lat(),
        lng: event.latLng.lng(),
      },
    });
  }

  onMarkerClick(student: Student) {
    this.router.navigate(['/students', student.id], {
      queryParams: {
        source: 'map',
      },
    });
  }
  private loadMap() {
    this.studentService.findAll().subscribe((response) => {
      response.forEach((student) => {
        this.addMarker(student);
      });
    });
  }

  private addMarker(student: Student) {
    const hasLatAndLng = student.lat && student.lng;
    const marker: Marker = {
      student,
      options: {
        draggable: true,
        animation: google.maps.Animation.DROP,
        icon: hasLatAndLng
          ? undefined
          : {
              url: '/assets/icons/map-marker-alt-solid.svg',
              scaledSize: new google.maps.Size(35, 35),
            },
        label: {
          text: student.name,
          fontWeight: 'bold',
          color: hasLatAndLng ? '#000000' : '#FFFFFF',
        },
        position: {
          lat: student.lat || this.mapCenter.lat,
          lng: student.lng || this.mapCenter.lat,
        },
      },
    };

    this.markers.push(marker);
  }
}
