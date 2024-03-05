
|Serial No. | Program                                                                                        | 
| --- | ---------------------------------------------------------------------------------------------------- |                                            
| 1 | [Check for leap years.](#leap-year)                                                                    |
| 2 | [Find roots of quadratic equation.](#quadratic-roots)                                                   |
| 3 |<a href="Part-1/Sum-and-reverse_num.c">Find sum of digits and reverse of number.</a>                      |
| 4 |<a href="Part-1/Half-pramid.c">Display pyramid using "\*".</a>                                            |
| 5 |<a href="Part-1/Factorial.c">Find factorial of a number.</a>                                              |
| 6 |<a href="Part-1/Primes.c">To find first **n** prime numbers.</a>                                          |
| 7 |<a href="Part-1/Lcm_gcd.c">Find LCM & HCF of two numbers.</a>                                             |
| 8 |<a href="Part-1/count_pos-neg-zero.c">To display count of -ve's, +ve's, zeroes in a set of N numbers.</a> |
| 9 |<a href="Part-1/N-Armstrong.c">To print Armstrong number within range.</a>                                |
| 10 |<a href="Part-1/Decimal-to-binary.c">To covert decimal number to new base.</a>                            |
| 11 |<a href="Part-1/Std_deviation.c">To calculate standard deviation of N numbers.</a>                        |
| 12 |<a href="Part-1/Binary-to-decimal.c">Find decimal equivalent of number(base other than 10).</a>           |
| 13 |<a href="Part-1/Merge_arr.c">To merge two arrays.</a>                                                     |
| 14 |<a href="Part-1/Sort_num.c">To sort n numbers.</a>                                                        |
| 15 |<a href="Part-1/Fibonacci.c">To find Nth fibonacci number.</a>                                            |
| 16 |<a href="Part-1/Trace-sq_matrix.c">To find the trace of a square matrix.</a>                              |
| 17 |<a href="Part-1/Count-words.c">Find the number of words in a given sentence.</a>                          |
| 18 |<a href="Part-1/Count-vowels.c">Find the number of vowels in strings.</a>                                 |
 
 
 # LEAP YEAR

A *Leap year* is a year that is evenly divisible by 4, except for years that are divisible by 100. However, years that are divisible by 400 are considered leap years.
This adjustment is necessary to keep our modern *Gregorian calendar* in alignment with the Earth's revolutions around the sun, which take **approximately 365.2425 days**.

The concept of leap years dates back to the time of *Julius Caesar*, who introduced the *Julian calendar* in *46 BCE*.
## Algorithm


**Leap-year( year ) :**
1. Start.
2. Input the year.
3. If the year is divisible by 4, go to step 4. Otherwise, go to step 8.
4. If the year is divisible by 100, go to step 5. Otherwise, go to step 6.
5. If the year is divisible by 400, go to step 6. Otherwise, go to step 8.
6. Output "Leap year."
7. Go to step 9.
8. Output "Not a leap year."
9. End.

## Flowchart representation:

```plaintext
   +---------------+       No       +-------------------+
   |  Input year   +--------------->| Output "Not Leap" |
   +---------------+                +-------------------+
           |
           V
   +---------------+
   | Year % 4 == 0 |
   +---------------+
        | Yes
        V
   +---------------+        No      +------------------+
   | Year % 100 == 0 +------------>| Output "Leap"    |
   +---------------+                +------------------+
        | Yes
        V
   +---------------+        No      +------------------+
   | Year % 400 == 0 +------------>| Output "Not Leap"|
   +---------------+                +------------------+
        | Yes
        V
  +-------------------+
  | Output "Leap"     |
  +-------------------+
```

# QUADRATIC ROOTS 

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
