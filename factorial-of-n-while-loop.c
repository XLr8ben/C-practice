/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, n=1, fac=1;
    printf("Enter n:");
    scanf("%d", &a);
    
    while(n<=a){
        fac*=n;
        n++;
        
    }
    printf("factorial of n is %d", fac);
    return 0;
}
