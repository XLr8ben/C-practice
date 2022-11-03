/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, n=1, sum=0;
    printf("enter n: ");
    scanf("%d", &a);
    
    while(n<=a){
        sum+=n;
        n++;
    }
    printf("sum upto n: %d", sum);
    

    return 0;
}
