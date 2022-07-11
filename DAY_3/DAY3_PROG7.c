7)Write program to calculate the age of a person based on year, month as i/p

#include <stdio.h>
#include <stdlib.h>
// function to calculate current age
void age(int present_date, int present_month, int present_year, int birth_date, int birth_month, int birth_year) {

   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   if (birth_date > present_date) {
      present_date = present_date + month[birth_month - 1];
      present_month = present_month - 1;
   }

   if (birth_month > present_month) {
      present_year = present_year - 1;
      present_month = present_month + 12;
   }

   int final_date = present_date - birth_date;
   int final_month = present_month - birth_month;
   int final_year = present_year - birth_year;
   printf("Present Age Years: %d Months: %d Days: %d", final_year, final_month, final_date);
}
int main() {
   int present_date, present_month, present_year;
   int birth_date, birth_month, birth_year;

   printf("Enter the present details:\n)
   scanf("%d", &present_date);
   scanf("%d", &present_month);
   scanf("%d", &present_year);

   printf("Enter the birth details:\n)
   scanf("%d", &birth_date);
   scanf("%d", &birth_month);
   scanf("%d", &birth_year);

   age(present_date, present_month, present_year, birth_date, birth_month, birth_year);

   return 0;
}
