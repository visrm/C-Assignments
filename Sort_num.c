/****************************************************************************************/
/*                           PROGRAM TO SORT A LIST OF 'N' NUMBERS                      */
/****************************************************************************************/
#include<stdio.h>                                                    //header files           
#include<conio.h>

int sort(int arr[], int num);
void main() {
    int a[10], n, i;
    clrscr();
    printf("Input number of terms, n : \n");
    scanf("%d", &n);
    if(n>10) printf("Err:Storage space unavailable\n");
    else {
        printf("Input the terms to sort :\n");
        for(i=0; i<n; i++) {                    //reads terms to sort into an array                            
            scanf("%d", &a[i]);
        }
        sort(a, n);                                                 //function call
        printf("\nSorted list of numbers :\n");
        for(i=0; i<n; i++) {
            printf("%d\n", a[i]);
        }
        getch();
    }
}

/*to sort numbers in ascending order*/
int sort(arr[], num)
{
    int i, j, t;
    for(i=0; i<num; i++)
        for(j=i+1; j<num; j++)
        {
            if(arr[i]>arr[j])                       //for ascending order of values
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    return arr;
}
