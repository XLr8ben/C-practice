//first-n-natural-no

#include <stdio.h>

int main()
{
    int a,n;
    printf("enter (n):\n");
    scanf("%d", &a);
    n=1;
    printf("natural no. upto n:\n");
    do{
        printf("%d\n",n); n++;
    }
    while(n<a);

    return 0;
}
