/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float p, r, t, far;
    printf("Given Principle\n");
    scanf("%f", &p);

    printf("Given Rate\n");
    scanf("%f", &r);

    printf("Given Time\n");
    scanf("%f", &t);

    far = (p * r * t)/100;

    printf("Calculated Simple Interest is%f", far);
    return 0;
}
