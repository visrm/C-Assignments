#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
int n, i;
float std_dev,sum=0,sumsqr=0,mean,val,variance =0.0,a[100];
clrscr();
printf("Enter the count of numbers \n");   //Input 
scanf("%d",&n);
printf("Enter numbers \n");

for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
sum += a[i];                     //terms continuously added per each step
}
mean = sum/n;                    //Mean calculated

for(i=0;i<n;i++)
{
val = a[i]-mean;                 //(x-μ) calculated for term per each loop
sumsqr += val*val;               //Σ(x-μ)² calculated 
}
variance = sumsqr/n;             //Variance calculated 
std_dev = sqrt(variance);        //Standard deviation calculated 

//Display results 
printf("\nMean of %d numbers = %f\n",n,mean);
printf("\nVariance of %d numbers = %f\n",n,variance);
printf("\nStandard deviation of %d numbers = %f\n",n,std_dev);
getch();
}