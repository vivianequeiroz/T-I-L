import { Injectable } from '@angular/core';
import { MatDialog } from '@angular/material/dialog';
import { Observable } from 'rxjs';
import { DialogComponent } from '../components/dialog/dialog.component';
import { DialogData } from '../models/DialogData';

@Injectable({
  providedIn: 'root',
})
export class AlertService {
  constructor(private dialog: MatDialog) {}

  showError(dialogData: DialogData): Observable<any> {
    const dialogRef = this.dialog.open(DialogComponent, {
      data: dialogData,
      disableClose: true,
    });

    return dialogRef.afterClosed();
  }
}
