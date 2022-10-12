//while-loop

#include <stdio.h>

int main()
{
    int a;
    printf("Enter no:");
    scanf("%d", &a);
    printf("sequence is\n");
    while(a<10){
        printf("%d\n", a);
        a++;
    }

    return 0;
}
