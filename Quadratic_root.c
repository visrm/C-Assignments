/********************************************************************/
/*     *PROGRAM TO FIND ROOTS OF A QUADRATIC EQUATION               */
/*                                                                  */
/*                                        BY-RAHUL MURALI           */
/*                                        BSC(MATHEMATICS) - II     */
/********************************************************************/

#include<stdio.h>             /*header files*/
#include<math.h>

void main()
{
    float a, b, c;                 /*Data type of variables a,b,c
                               for quadratic eqn ax²+bx+c=0 */

    printf("**********************************************************\n");
    /* Obtaining inputs from the user for a,b,c respectively*/
    printf("Input value of a :\n");
    scanf("%f", &a);
    printf("Input value of b :\n");
    scanf("%f", &b);
    printf("Input value of c :\n");
    scanf("%f", &c);
    printf("");

    float d,D;
    D = b*b - 4*a*c;         /*Determinant of the Quadratic Equation*/
    d = sqrt(D);

    /*Checks for root of equation*/
    while(a!=0)             /*while loop*/
    {
        if(D==0) {
            printf("Root of the eqn is : %f", (-b)/(2*a) );
            break;
        }
        if(D>0) {
            printf("Roots of the eqn are: %f %f",((-b)-(d))/2*a,((-b)+(d))/2*a);
            break;
        }
        if(D<0) {
            printf("Root doesn't exist");
            break;
        }
    }                     /*end of while loop*/

}
