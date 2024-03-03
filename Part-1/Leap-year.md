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
