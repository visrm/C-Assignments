/******************************************************************************************************/
/*        PROGRAM TO COUNT AND DISPLAY THE NO. OF -VE, +VE AND ZEROES IN A SET OF NUMBERS             */ 
/******************************************************************************************************/
#include<stdio.h>                              //header files   
#include<conio.h>

void main()
{
  int i,n, num[10], pos=0, neg=0, zero=0;
  clrscr();
  printf("Enter the number of terms :\n");
  scanf("%d", &n);
  if(n>10) printf("Insufficient storage space");
  else {
       printf("Enter numbers to check :\n");
       for(i=0; i<n; i++) {
         scanf("%d", &num[i]);                //reads Input numbers into array; num
        }

       for(i=0; i<n; i++) {                  //checks number of +ve/-ve/zeroes
          if(num[i]>0)   pos++;
          else if(num[i] < 0)    neg++;
          else    zero++;
        }
     }
  //prints the number of +ve/-ve/zeroes 
  printf("Positive Numbers: %d\nNegative Numbers: %d\nNumber of zero: %d\n",pos, neg, zero);
  getch();
}
