//It is a program to give output depending on ur rating given

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
