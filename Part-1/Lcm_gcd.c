/***************************************************************************************/
/*               PROGRAM  TO  FIND  LCM  AND  GCD  OF  TWO  NUMBERS                    */
/***************************************************************************************/
#include <stdio.h>
#include <conio.h>

int gcd(int a, int b);
int lcm(int a, int b, int gcd);
void main()
{
    int a, b, x, y, t;
    clrscr();
    printf("Enter two integers :\n");
    scanf("%d%d", &x, &y);
    a = x;
    b = y;
    a = gcd(a, b); /*Function call*/
    t = lcm(x, y, a);
    printf("Greatest common divisor of %d and %d = %d\n", x, y, a);
    printf("Least common multiple of %d and %d = %d\n", x, y, t);
    getch();
}

int gcd(a, b)
{
    // Euclid's Division method
    while (b != 0)
    {
        int t; // variable to store dividend
        t = b;
        b = a % b; // To update dividend to remainder
        a = t;     // To update divisor to dividend
    }
    return a;
}

int lcm(a, b, gcd)
{
    int t;
    //([a, b]*(a, b)) = (a*b)
    t = (a * b) / gcd;
    return t;
}