
|Serial No. | Program                                                                                        | 
| --- | ---------------------------------------------------------------------------------------------------- |                                            
| 1 | [Check for leap years.](#check-for-leap-year)                                                                    |
| 2 | [Find roots of quadratic equation.](#Find-roots-for-quadratic-equations)                                                   |
| 3 | [Find sum of digits and reverse of number.](#find-sum-and-reverse-of-digits)                              |
| 4 |Display pyramid using "\*".                                            |
| 5 | [Find factorial of a number.](#find-factorial-of-number)                                             |
| 6 | To find first **n** prime numbers.                                          |
| 7 | Find LCM & HCF of two numbers.                                             |
| 8 | To display count of -ve's, +ve's, zeroes in a set of N numbers.                                                      |
| 9 | To print Armstrong number within range.                                |
| 10 | To covert decimal number to new base.                            |
| 11 | To calculate standard deviation of N numbers.                       |
| 12 | Find decimal equivalent of number(base other than 10).          |
| 13 | To merge two arrays.                                                     |
| 14 | To sort n numbers.                                                        |
| 15 | To find Nth fibonacci number.                                           |
| 16 | To find the trace of a square matrix.                             |
| 17 | Find the number of words in a given sentence.                          |
| 18 | Find the number of vowels in strings.                                 |
 
 
# Check for leap year 
## Description 

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

# Find roots for quadratic equations
## Description 


The problem involves finding the roots of a *Quadratic equation*. A *Quadratic equation* is a polynomial equation of the second degree, typically written in the form  ***ax² + bx + c = 0*** , where *x* represents an unknown variable, and  *a*, *b* and *c* are constants with *a* ≠ 0. 

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
**Quadratic_root(  a, b, c ):**

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
# Find sum and reverse of digits
## Description 

The problem involves finding the sum and reverse of the digits of a given number. 

1. **Sum of Digits:** The sum of digits involves extracting each digit of the given number, adding them together, and then outputting the sum.

2. **Reverse of Digits:** The reverse of digits involves reversing the order of the digits in the given number.

For example, given the number 12345:
- The sum of digits would be 1 + 2 + 3 + 4 + 5 = 15.
- The reverse of digits would be 54321.

This problem is common in programming tasks and can be solved using algorithms and flowcharts as described below.

## Algorithm:
**Sum-and-reverse_num( num ):**

1. Start.
2. Input the number.
3. Initialize variables `sum` and `reverse` to 0.
4. Repeat the following steps until the number becomes 0:
    a. Extract the last digit of the number using the modulo operator (%).
    b. Add the extracted digit to the `sum` variable.
    c. Multiply the `reverse` variable by 10 and add the extracted digit.
    d. Update the number by removing the last digit using integer division (/).
5. Output the sum and reverse.
6. End.

## Flowchart representation:

```plaintext
        +---------------+
        |  Input number |
        +---------------+
               |
               V
  +-----------------------------+
  | Initialize sum=0, reverse=0 |
  +-----------------------------+
               |
               V
    +----------------------+
    |  While number != 0:  |
    +----------------------+
               |
               V
     +--------------------+
     | Extract last digit |
     +--------------------+
               |
               V
      +------------------+
      |   Add to sum     |
      +------------------+
               |
               V
      +------------------+
      |  Update reverse  |
      +------------------+
               |
               V
      +-------------------+
      | Remove last digit |
      +-------------------+
               |
               V
       +---------------+
       |  End of loop  |
       +---------------+
               |
               V
    +----------------------+
    | Output sum, reverse  |
    +----------------------+
```

# Find factorial of number
## Description 

The problem involves finding the *Factorial* of a number. The *Factorial* of a non-negative integer, ***n***  denoted as ***n!*** , is the product of all positive integers less than or equal to *n* .

Mathematically, it can be defined as:

**n! = n x (n - 1) x (n - 2) x (n - 3) × ... × 2 x 1**

For example:
- 5! = 5 x 4 x 3 x 2 x 1 = 120.
- 0! is defined to be 1.

Factorials are fundamental in *mathematics* and have applications in various fields such as combinatorics, probability theory, and algorithms. In **combinatorics**, factorials are used to count the number of permutations and combinations of a set. In **probability theory**, they are used to calculate the number of possible outcomes in an experiment. In **algorithms**, factorials are used in problems involving recursion, dynamic programming, and optimization.

*Factorial calculations can be done using iterative or recursive algorithms, both of which involve multiplying consecutive integers. However, iterative approaches are generally preferred for efficiency and simplicity.*

## Algorithm:
**Factorial( n ):**

1. Start.
2. Input the number.
3. Initialize a variable `fact` to 1.
4. Repeat the following steps for ` i ` from 1 to the input number:
    a. Multiply `fact` by ` i `.
5. Output the `fact`.
6. End.

## Flowchart representation:

```plaintext
       +---------------+
       |  Input number |
       +---------------+
              |
              V
   +------------------------+
   | Initialize factorial=1 |
   +------------------------+
              |
              V
     +-------------------+
     |  Loop: i = 1 to n |
     +-------------------+
              |
              V
   +-------------------------+
   | Multiply factorial by i |
   +-------------------------+
              |
              V
      +------------------+
      |   End of Loop    |
      +------------------+
              |
              V
      +------------------+
      | Output factorial |
      +------------------+
```