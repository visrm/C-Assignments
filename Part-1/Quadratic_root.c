/****************************************************************************************************/
/*      PROGRAM TO FIND ROOTS OF A QUADRATIC EQUATION                                               */                                                                            
/****************************************************************************************************/
#include<stdio.h>                            //header files*
#include<conio.h>
#include<math.h>

void main()
{
    float a, b, c, d, D; 
    clrscr();
    //User input                
    printf("Input value of a :\n");
    scanf("%f", &a);
    printf("Input value of b :\n");
    scanf("%f", &b);
    printf("Input value of c :\n");
    scanf("%f", &c);
    D = b*b - 4*a*c;                         //Determinant of the Quadratic Equation
    d = sqrt(D);

    /*Checks for root of equation*/
    while(a!=0 && b!=0)                      
    {
        if(D==0) { printf("Root of the eqn is : %f", (-b)/(2*a) );
                   break;
        }
        if(D>0) { printf("Roots of the eqn are: %f %f",((-b)-(d))/(2*a),((-b)+(d))/(2*a));
                  break;
        }
        else { printf("Root doesn't exist");
              break;
        }
    }  //end of loop
    getch();
}
