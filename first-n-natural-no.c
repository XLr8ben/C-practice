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
    printf("enter (n):\n");
    scanf("%d", &a);
    n=1;
    printf("natural no. upto n:\n");
    do{
        printf("%d\n",n); n++;
    }
    while(n<a);

    return 0;
}
