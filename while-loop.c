/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter no:");
    scanf("%d", &a);
    printf("sequence is\n");
    while(a<10){
        printf("%d\n", a);
        a++;
    }

    return 0;
}
