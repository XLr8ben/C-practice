//swapping-two-no.

#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter a:");
    scanf("%d", &a);
    
    printf("Enter b:");
    scanf("%d", &b);
    
    temp = a;
    a = b;
    b = temp;
    
    //a = a - b;
    //b = a + b;
    //a = b - a;
    
    printf("a is %d\n", a);
    printf("b is %d\n", b);
    

    return 0;
}
