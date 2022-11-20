#include <stdio.h>
void print(int a){
    printf("The address of variable is %u\n", &a);
}
int main()
{
    int i=4;
    printf("The value of i is %d\n",i);
    print(i);
    printf("The address of variable i is %u\n", &i);

    return 0;
}
