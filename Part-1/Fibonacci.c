/*********************************************************************************/
/*               PROGRAM  TO  FIND  NTH  FIBONACCI  NUMBER                       */
/*********************************************************************************/
#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 2, n, term1 = 1, term2 = 1, term3;
    // set i = 2 since first 2 terms are already known.
    clrscr();
    printf("Input the number of term: ");
    scanf("%d", &n);
    printf("\nThe Fibonacci series is given by: \n\n%d\t%d\t", term1, term2);
    while (i < n)
    {
        term3 = term1 + term2;
        printf("%d\t", term3);
        term1 = term2;
        term2 = term3;
        i++;
    }
    printf("\n\nThe %dth Fibonacci number is : %d", n, term3);
    getch();
}