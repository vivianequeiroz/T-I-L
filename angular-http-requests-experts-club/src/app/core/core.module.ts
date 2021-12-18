import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { RouterModule } from '@angular/router';
import { HttpClientModule } from '@angular/common/http';
import { BrowserModule } from '@angular/platform-browser';
import { BrowserAnimationsModule } from '@angular/platform-browser/animations';

import { NgbModule } from '@ng-bootstrap/ng-bootstrap';

import { MainComponent } from './layout/main/main.component';
import { HeaderComponent } from './layout/header/header.component';
import { NgxSpinnerModule } from 'ngx-spinner';
import { ToastrModule } from 'ngx-toastr';

const toastrConfig = {
  maxOpened: 1,
  timeOut: 5000,
  enableHtml: true,
  autoDismiss: true,
  preventDupicates: true,
  positionClass: 'toast-top-right',
};
@NgModule({
  declarations: [HeaderComponent, MainComponent],
  imports: [
    BrowserModule,
    BrowserAnimationsModule,
    HttpClientModule,
    CommonModule,
    RouterModule,
    NgxSpinnerModule,
    ToastrModule.forRoot(toastrConfig),
    NgbModule,
  ],
  exports: [MainComponent],
})
export class CoreModule {}
