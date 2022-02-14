/***********************************************************************************************/
/*     PROGRAM TO FIND SUM OF DIGITS OF A NUMBER AND REVERSING DIGITS                          */
/*                                                                                             */ 
/***********************************************************************************************/

#include <stdio.h>

    void main()
{
   int number, digit, i, sum = 0, reverse_num = 0;
   printf("enter no. to add");
   scanf("%d", &number);
   for (i = 1; i <= 10; i++) // For 10 digit only
   {
      digit = number % 10;
      number = number / 10;
      sum = sum + digit;                      // For obtaining sum of digits
      reverse_num = reverse_num * 10 + digit; // For reversing the digits
   }
   printf("sum of given number is : %d\n reversed number is : %d", sum, reverse_num);
}
