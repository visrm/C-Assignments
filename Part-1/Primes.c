/*************************************************************************************************/
/*              PROGRAM  TO  FIND  FIRST  "N"  PRIME  NUMBERS                                    */
/*************************************************************************************************/
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, count = 1, flag, i = 2, j;
    printf("Enter how many prime numbers? :\n");
    scanf("%d", &n);
    printf("\nThe first %d primes are : \n", n);
    while (count <= n)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d\t", i);
            count++;
        }
        i++;
    }
}