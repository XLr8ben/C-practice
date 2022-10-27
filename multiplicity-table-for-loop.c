//multiplicity-table-for-loop

#include <stdio.h>

int main()
{
    int a,n;
    printf("Table of: ");
    scanf("%d", &a);
    
    for(n=1; n<=10; n++){
        printf("%d x %d = %d\n", a, n, a*n);
    }

    return 0;
}
