/********************************************************************************/
/*                  PROGRAM  TO  DISPLAY  A  PYRAMID  USING  "*"                */
/********************************************************************************/
#include <stdio.h>
#include <conio.h>

void main() {
    int i, space, rows, k = 0;
    clrscr();
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++,k = 0)
    {
        for(space = 1; space <= rows - i; space++)
        {
            printf("  ");
        }
        while(k != 2*i - 1)
        {
            printf("* ");
            k++;
        }
        printf("\n");
    }
    getch();
}