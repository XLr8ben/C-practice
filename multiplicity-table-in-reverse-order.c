//multiplicity-table-in-reverse-order

#include <stdio.h>

int main()
{
    int a,n;
    printf("Table of: ");
    scanf("%d", &a);
    
    for(n=10; n; n--){
        printf("%d x %d = %d\n", a, n, a*n);
    }

    return 0;
}
