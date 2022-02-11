#include <stdio.h>

int print ( int n );
int main()
{
int n ,x ,i ,r=0 ;
printf("enter no. to add");
scanf ("%d",&n);
for (i=1;i<10;i++) // for 4 digit only
{
x = n%10;
n=n/10;
r=r+x;
}
printf ("sum of given no. is %d",r);
return 0;
}
