//pointers 

#include <stdio.h>

int main()
{
    int i=5;
    int *j = &i;
    int **k= &j;
    
    printf("%d\n", *j);
    printf("%d\n", i);
    
    printf("%u\n", &i);
    printf("%u\n", *(&j));
    printf("\n");
    printf("%u\n", &k);
    
     int a=3;
    int *ptr= &a;
    printf("The address of a is %u\n", ptr);
    printf("The value of a is %d\n", *ptr);
    printf("The value of a is %d\n", ptr);
    printf("The value of a is %d\n", &ptr);
    printf("The value of a is %d\n", *(&ptr));
    printf("The value of a is %d\n", a);
    return 0;
}
}


