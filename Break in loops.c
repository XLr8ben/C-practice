/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    
    for(int a=1; a<n; a++){
        
        printf("natural no. are %d\n", a);
        if(a==n)
        break;
    }

    return 0;
}

