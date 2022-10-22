/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    
    for(int a=n; a; a--){
        
        printf("natural no. are %d\n", a);
    }

    return 0;
}


