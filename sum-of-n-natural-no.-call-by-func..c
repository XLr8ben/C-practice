//Sum of n natural no. using call by func.

#include <stdio.h>
int sum(int n);

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    
    printf("Sum of %d natural no is %d",n, sum(n));
    return 0;
}

int sum(int n){
    //printf("%d\n", n);
   while(n!=1){
       return sum(n - 1) + n;
   }
    }
