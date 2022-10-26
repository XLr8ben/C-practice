//Break in loops

#include <stdio.h>

int main()
{
 
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    
    for(int a=1; a<n; a++){
        
        printf("natural no. are %d\n", a);
        if(a==n)
        break;
    }

    return 0;
}

