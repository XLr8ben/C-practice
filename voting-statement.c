/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{    
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    if (age>18){
       printf("you can vote");
    }
    else if(age<18){
       printf("ghar jao bacha");
    }
    else if(age=18){
       printf("Near miss");
    }
    return 0;
}

