//multiplicity-table-while-loop

#include <stdio.h>

int main()
{
    int a, n=1;
    printf("Table of: ");
    scanf("%d", &a);
    
    while(n<=10){
    printf("%d x %d = %d\n", a, n, a*n); n++;
}
    return 0;
}
