/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int times(int i){
    int c = pow(i,10);
    
}

int main()
{
    int a;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Value of a is %d\n", a);
    printf("10 times value is %d\n", times(a));
    
    return 0;
}
