/*******************************************************************************/
/*            PROGRAM TO FIND FACTORIAL OF NUMBERS                             */
/*******************************************************************************/
#include<stdio.h>                                               //header files
#include<conio.h>

int fact(int n);
void main()
{   int f, num;
    clrscr();
    printf("Input number : \n");
    scanf("%d", &num);                                     //User number input
    if(num<0) printf("error! Factorial doesn't exist");
    f = fact(num);                                             //function call
    printf("Factorial of %d i.e, %d! = %u", num, num, f);
    getch();
}

int fact(n)                               //function for determining factorial
{   int f=1, i;
    if (n==0||n==1) return 1;
    else {
        for(i=1; i<=n; i++)
        {
            f = f*i;
        }
        return f;
    }
}                                            //returns integer factorial value