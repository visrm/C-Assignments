/*********************************************************************************/
/*                   PROGRAM  TO  IMPLEMENT  SPARSE  MATRIX                      */
/*********************************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int A[10][10],B[10][3],m,n,s=0,i,j;
    clrscr();
    printf("\nEnter the order m x n of the sparse matrix\n");
    scanf("%d%d",&m,&n);
    printf("\nEnter the elements in the sparse matrix(mostly zeroes)\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\n%d row and %d column: ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("The given matrix is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t ",A[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(A[i][j]!=0)
            {
                B[s][0]=A[i][j];
                B[s][1]=i+1;
                B[s][2]=j+1;
                s++;
            }
        }
    }
    printf("\nThe sparse matrix is given by\n");
    printf("\n");
    printf("\tvalue\trow\tcolumn\n\n");
    for(i=0; i<s; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("\t%d ",B[i][j]);
        }
        printf("\n");
    }
    getch();
}