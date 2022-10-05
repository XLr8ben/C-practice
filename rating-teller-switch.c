/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int rating; 
    printf("enter your ratings\n");
    scanf("%d", &rating);

    switch(rating){
        case 1:
        printf("ur rating is 1");
        break;
    
        case 2:
        printf("ur rating is 2"); 
        break;
        
        case 3:
        printf("ur rating is 3");
        break;
    
        case 4:
        printf("ur rating is 4");
        break;
    
        case 5:
        printf("ur rating is 5");
        break;
        
        default:
        printf("invalid input");
    }

    return 0;
}
