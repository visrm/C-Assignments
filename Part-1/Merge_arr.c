/********************************************************************************/
/*         PROGRAM  TO  MERGE  TWO  ARRAYS                                      */
/********************************************************************************/
#include <stdio.h>
#include <conio.h>

void main()
{
    int a[10], b[10], merge[20], s1, s2, i, k;
    clrscr();
    printf("Enter size of first array : ");
    scanf("%d", &s1);
    printf("\nEnter array elements : \n");
    for (i = 0; i < s1; i++)
    {
        scanf("%d", &a[i]);
        merge[i] = a[i]; // append a[] elements to merge[]
    }
    k = i; // Checkpoint for end index of a[] elements
    printf("\nEnter size of second array : ");
    scanf("%d", &s2);
    printf("\nEnter array elements : \n");
    for (i = 0; i < s2; i++)
    {
        scanf("%d", &b[i]);
        merge[k] = b[i]; // append b[] elements to merge[]
        k++;
    }
    printf("\nThe merged array is : \n");
    for (i = 0; i < k; i++)
    {
        printf("%d\t", merge[i]);
    }
    getch();
}
