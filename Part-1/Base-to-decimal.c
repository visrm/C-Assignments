/*********************************************************************************/
/*  PROGRAM TO FIND DECIMAL EQUIVALENT OF NUMBER (BASE OTHER THAN 10 AND BELOW)  */
/*********************************************************************************/
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int n, i, temp, num, base, digit, decimal = 0, count = 0;

    clrscr();
    printf("Enter the number :\n");
    scanf("%d", &n);
    printf("Enter the base :\n");
    scanf("%d", &base);

    //To find the count of digits
    temp = n;
    while(n>0)
    {
        digit = n%10;
        if(digit >= 0) count++;
        n = n/10;
    }

    //To convert the number to decimal
    n = temp;
    for(i=0; i<count; i++)
    {
        num = n%10;
        n = n/10;
        decimal += num*(pow(base, i));
    }
    printf("\nThe Decimal equivalent of %d is : %d", temp, decimal);
    getch();
}