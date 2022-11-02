/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
