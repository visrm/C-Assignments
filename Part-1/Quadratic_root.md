# QUADRATIC EQUATION 

A *Quadratic equation* is a polynomial equation of the second degree, typically written in the form  ***ax² + bx + c = 0*** , where *x* represents an unknown variable, and  *a*, *b* and *c* are constants with *a* ≠ 0. 

In the equation; ***ax² + bx + c = 0***

-  ***a***   is the coefficient of the quadratic term,
-  ***b***   is the coefficient of the linear term,
-  ***c***   is the constant term.

Quadratic equations can have one of three types of solutions:

1. **Real and distinct roots:** If the discriminant ( b²  -  4ac ) is positive, the equation has two real and distinct roots.
2. **Real and repeated roots:** If the discriminant is zero, the equation has two identical real roots.
3. **Complex roots:** If the discriminant is negative, the equation has two complex roots, which may not be real numbers.

Quadratic equations often arise in various areas of mathematics, physics, engineering, and other sciences. They are commonly used to model situations involving parabolic curves, such as projectile motions etc. 
Quadratic equations can be solved using various methods, including factoring, completing the square, and using the quadratic formula.

## Algorithm:
**Quadratic_root( a, b, c ):**

1. Start.
2. Input the coefficients a, b and c.
3. Calculate the discriminant , D = b²  -  4ac .
4. If (  D > 0  ), go to step 5. If (  D = 0  ), go to step 6. If (  D < 0  ), go to step 7.
5. Calculate the roots using the formula ( x1 = ( -b + sqrt( D ) ) / ( 2a ) ) and ( x2 = ( -b - sqrt( D ) ) / ( 2a ) ). Output the roots.
6. Calculate the single root using the formula ( x = -b / ( 2a ) ). Output the root.
7. Output "Complex roots: No real roots exist."
8. End.

## Flowchart representation:

```plaintext
                                                        +------------------------+
                                                        |   Input coefficients   |
                                                        +------------------------+
                                                                    |
                                                                    V
                                                     +-----------------------------+
                                                     |   Calculate D = b^2 - 4ac   |
                                                     +-----------------------------+
                                                                    |
                  -------------------------------------------------------------------------------------------------
                  |                                                 |                                             |
                  V                                                 V                                             V
    +--------------------------------------+        +------------------------------------+       +---------------------------------+
    |    D > 0: Calculate roots x1, x2     |        |   D = 0: Calculate single root x   |       |  D < 0: Output "Complex roots"  |
    +--------------------------------------+        +------------------------------------+       +---------------------------------+
             |                        |                             |                                             |
             V                        V                             V                                             |
 +--------------------+   +---------------------+        +------------------------+                               |
 |   Output roots     |   |   Output roots      |        |      Output root       |                               |
 +--------------------+   +---------------------+        +------------------------+                               |
                  |                                                 |                                             |
                  V                                                 V                                             V
                  -------------------------------------------------------------------------------------------------
                                                                    |
                                                                    V
                                                              +--------------+
                                                              |     End      |
                                                              +--------------+
```
