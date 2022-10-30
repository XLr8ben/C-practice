/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, n=1;
    printf("Table of: ");
    scanf("%d", &a);
    
    do{
        printf("%d x %d = %d\n", a, n ,a*n); n++;
    }
    while(n<=10);
    return 0;
}
