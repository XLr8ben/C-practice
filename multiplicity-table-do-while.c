//multiplicity-table-do-while
    
#include <stdio.h>

int main()
{
    int a, n=1;
    printf("Table of: ");
    scanf("%d", &a);
    
    do{
        printf("%d x %d = %d\n", a, n ,a*n); n++;
    }
    while(n<=10);
    return 0;
}
