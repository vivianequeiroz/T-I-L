//8. Write a C program to convert specified days into years, weeks and days
// Test Data - Number of days : 1329 
#include <stdio.h>
#include <stdlib.h>

int main() {

    int days, years, weeks, remaining_days;

    days = 1329; 
    years = days/365; 
    weeks = (days%365)/7;
    remaining_days = days - ((years*365) + (7*weeks));

    printf("1329 dias equivalem a %i anos, %i semanas e %i dias", years, weeks, remaining_days);
}