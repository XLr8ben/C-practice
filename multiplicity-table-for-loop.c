/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,n;
    printf("Table of: ");
    scanf("%d", &a);
    
    for(n=1; n<=10; n++){
        printf("%d x %d = %d\n", a, n, a*n);
    }

    return 0;
}
