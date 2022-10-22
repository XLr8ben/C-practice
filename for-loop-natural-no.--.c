//for-loop-natural-no.--

#include <stdio.h>

int main()
{   
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    
    for(int a=n; a; a--){
        
        printf("natural no. are %d\n", a);
    }

    return 0;
}


