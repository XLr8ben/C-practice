/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b ,c ,d;
    printf("Enter num 1:\n");
    scanf("%d", &a);
    
    printf("Enter num 2:\n");
    scanf("%d", &b);
    
    printf("Enter num 3:\n");
    scanf("%d", &c);
    
    printf("Enter num 4:\n");
    scanf("%d", &d);
    
    if(a>b && a>c && a>d){
        printf("greatest num is:%d", a);
        
    }
      else if(b>a && b>c && b>d){
          printf("gratest num is:%d", b);
          
      }
        else if(c>d && c>a && c>b){
            printf("gratest num is:%d", c);
        }
          else if(d>a && d>b && d>c){
              printf("greatest num is:%d", d);
          }
          else
            
    return 0;
}

