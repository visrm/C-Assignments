/********************************************************************************/
/*          PROGRAM TO CONVERT DECIMAL NUMBER TO NEW BASE(BINARY)               */
/********************************************************************************/
#include<stdio.h>                                      //header files           
#include<conio.h>

void main() {
    int a[10], n, i;
    clrscr();
    printf("Input number, n : \n");
    scanf("%d", &n);
    if(n<0) printf("Error!Use unsigned integers\n");
    //conversion to binary from decimal(0 - 4095)
    else {
        for(i=0; n>0; i++) {
            a[i] = n%2;
            n = n/2;
        }
        //display 'a' array elements without gaps
        printf("\nBinary number : ");
        for(i=i-1; i>=0; i--) {
            printf("%d", a[i]);
        }
    }
    getch();
}

