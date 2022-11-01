/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b ,c;
    printf("no: ");
    scanf("%d", &a);
    
    for(b=1; b<=a; b++)
    {
        
        for(c=1; c<=a; c++)
        {
          printf("*");
        }
          printf("\n");
        
    }

    return 0;
}
