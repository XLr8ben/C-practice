/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void star(int n);

int main()
{
    int a;
    printf("Enter lines u want to display\n");
    scanf("%d", &a);
    
    star(a);

    return 0;
}

void star(int n){
     if(n==1){
        printf("*\n");
        return;
    }
    star(n - 1);
    for(int i=0; i<(2*n - 1); i++){
        
      // for(int j=1; j<i; j++){
      //     printf("*");
      // }
       printf("*");
}
printf("\n");
}