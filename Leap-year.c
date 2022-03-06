/*******************************************************************************/
/*      PROGRAM TO IDENTIFY LEAP YEARS                                         */
/*                                                                             */
/*******************************************************************************/

#include<stdio.h>
#include<conio.h>  /*header files*/

void main()
{
    unsigned int year;
    clrscr();
    printf("Input the  year\n ");
    scanf("%d", &year);
      if(year%4==0 && year%400==0 && year%100!=0) {
             printf("Year %d is a Leap year\n", year);
           }
      else  printf("Year %d is Non-Leap year\n", year);     
    getch();
} // end of program
