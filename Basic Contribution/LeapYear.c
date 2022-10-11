#include <stdio.h>
#include<stdlib.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   if (year % 4== 0)
      printf("The given year %d is a leap year.", year);

   else
      printf("THe given year %d is not a leap year.", year);

   return 0;
}
