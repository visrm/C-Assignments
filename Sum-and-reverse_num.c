/********************************************************************************************/
/*     PROGRAM TO FIND SUM OF DIGITS OF A NUMBER AND REVERSING DIGITS                       */
/********************************************************************************************/
#include<stdio.h>
#include<conio.h>

int sumFunc(int i);
int revFunc(int i);
void main()
{ 
  int num, Sum, Rev;
  clrscr();
  printf("Enter the number\n");
  scanf("%d",&num);
  Sum = sumFunc(num);
  Rev = revFunc(num);
  printf("sum of given number is : %d\nreversed number is : %d\n",Sum, Rev);
  getch();
}

int sumFunc(n)
{ 
  int digit, i, sum=0;
  for(i=1; i<=10; i++)             // For 10 digit only
  { 
    digit = n%10;
    sum = sum+digit;              // For obtaining sum of digits
    n = n/10;
  }
  return sum;
}

int revFunc(n)
{ 
  int digit, i, rev_num=0;
  for(i=1; i<=10; i++)              // For 10 digit only
  { 
    digit = n%10;
    rev_num = rev_num*10 + digit; //For reversing the digits
    n = n/10;
  }
  return rev_num;
}
