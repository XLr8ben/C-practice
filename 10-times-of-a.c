//10-times-of-a

#include <stdio.h>
#include <math.h>
int times(int i){
    int c = pow(i,10);
    
}

int main()
{
    int a;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Value of a is %d\n", a);
    printf("10 times value is %d\n", times(a));
    
    return 0;
}
