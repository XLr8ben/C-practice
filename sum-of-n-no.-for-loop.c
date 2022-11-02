//sum-of-n-no.-for-loop

#include <stdio.h>

int main()
{
    int a, n, sum=0;
    printf("enter n: ");
    scanf("%d", &a);
    
    for(n=1; n<=a; n++){
        sum = sum + n;
    }
        printf("Sum upto n: %d", sum);
        
        
    

    return 0;
}
