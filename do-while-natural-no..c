//do-while-natural-no.

#include <stdio.h>

int main()
{
    int a=1, n;
    printf("enter no:");
    scanf("%d", &n);
    
    do{
        printf("natural no. are %d\n", a);
        a++;
    }
    while(a<n);

    return 0;
}
