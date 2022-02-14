/***********************************************************************************************/
/*     PROGRAM TO FIND SUM OF DIGITS OF A NUMBER AND REVERSING DIGITS                          */
/*                                                                                             */ 
/***********************************************************************************************/

#include<stdio.h>

    void main()
{
int num ,digit ,i ,sum=0 ,rev_num=0;
printf("Enter the number\n");
scanf("%d",&num);
for(i=1;i<=10;i++) // For 10 digit only
   {
    digit = number%10;
    num = num/10;
    sum = sum+digit;  // For obtaining sum of digits 
    rev_num = rev_num*10 + digit; //For reversing the digits 
   }
printf("sum of given number is : %d\n reversed number is : %d\n",sum, rev_num);
}
