/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int year;
    printf("Enter year:\n");
    scanf("%d", &year);
    
    if(year%400 == 0){
        printf("it is a leap year");
        
    }
      else if(year%100 == 0){
          printf("not a leap year");
      }
       else if(year%4 == 0){
         printf("it is a leap year");
       }
       else{
           printf("not a leap year");
       }
          
    return 0;
}
