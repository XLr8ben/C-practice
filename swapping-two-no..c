/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
