//Print value of i using pointer to pointer
#include <stdio.h>

int main()
{
    int i = 345;
    int *ptr = &i;
    int **ptr_ptr = &ptr;
    
    printf("The value of i is %d", **ptr_ptr);
    

    return 0;
}
