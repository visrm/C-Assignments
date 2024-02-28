/********************************************************************************/
/*             PROGRAM  TO  FIND  FIRST  "N"  ARMSTRONG  NUMBERS                */
/********************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n, i, j, digit, sum;
    clrscr();
    //To Read count(n)
    printf("Enter the count of first 'nth' term:\n");
    scanf("%d", &n);
    printf("\nThe Armstrong numbers from 1 to %d are:\n", n);

    //For loop for checking each number till n
    for(i=1; i<n; i++)
    {
        j = i;
        sum = 0;                //Initialise sum for each iteration
        //while loop to compute sum of cubes of each digits
        while(j>0)
        {
            digit = j%10;
            sum += pow(digit, 3);
            j = j/10;
        }
        //To check whether the number is Armstrong number and print.
        if(sum==i)  printf("\n%d is an Armstrong number\n", i);
    }
    getch();
}