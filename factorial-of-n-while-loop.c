//factorial-of-n-while-loop

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
