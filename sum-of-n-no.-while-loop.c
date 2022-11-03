//sum-of-n-no.-while-loop

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
