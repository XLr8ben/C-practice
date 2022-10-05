/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int r;
    printf("value of radius is\n");
    scanf("%d", &r);
    
    float pi = 3.14;
    printf("area of cirle is %f\n", pi * r * r);
  
    int h;
    printf("value of height is \n");
    scanf("%d", &h);

    printf("volume of cyl. is %f", pi * r * r * h);
    
    return 0;
}

