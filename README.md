# Math++
Math++ is an extended Math.h header file for C language with 13 more functions
```c
#include<stdio.h>
#include "math++.h"

int main() {
  printf("cubic root: %f",cbrt(27));
}
```
<h2>Functions:</h2>

```c
isprime(number)
```
> checks the entered number if it's prime or not and returns values 1,0 (true/false)
```c
cubrt(number)
```
> calculates the cube root of an entered number
```c
nrt(number,index_of_root)
```
> calculates higher index roots
```c
ln(number)
```
> calculates the natural log (same as log(num) from <math.h> )
```c
Logn(n,x)
```
> calculates any log<sub>n</sub> (x)
```c
to_degree(angle in degrees)
```
> converts from radian to degrees
```c
to_radian(angle in radian)
```
> converts from degrees to radian
```c
fact(number)
```
> calculates the factorial of the entered number
```c
perm(n,r)
```
> calculates the permutation (nPr)
```c
comb(n,r)
```
> calculates the combination (nCr)
```c
sec(angle)
```
> calculates sec(angle)
```c
csc(angle)
```
> calculates csc(angle)
```c
cot(angle)
```
> calculates cot(angle)
