/*******************************************************************************/
/*      PROGRAM TO IDENTIFY LEAP YEARS                                         */
/*                                                                             */
/*******************************************************************************/

#include <stdio.h> /*header file*/

void main()
{
    unsigned int initial_y, final_y, year;

    // User input for initial and final years to check
    printf("Input the initial year\n");
    scanf("%d", &initial_y);
    printf("Input the final year\n ");
    scanf("%d", &final_y);
    // To check the validity of inputed years
    if (final_y <= initial_y)
        printf("Invalid Initial or Final Year\n\n");
    else
    {
        // code for displaying of leap years and non-leap years
 
    //To check the validity of inputed years
    if(final_y<=initial_y) printf("Invalid Initial or Final Year\n\n");
    else  {
        //code for displaying of leap years and non-leap years
        for(year=initial_y; year<=final_y; year+=1) {
            if(year%4==0 && year%400==0 && year%100!=0) { 
                    printf("Year %d is a Leap year\n\n", year);
                  }
            else  printf("Year %d is Non-Leap year\n\n", year);
        }
    }
} // end of program
