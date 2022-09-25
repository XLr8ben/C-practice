//Temperature Converter
#include <stdio.h>

int main()
{
    float c, far;
    printf("value of C° is\n");
    scanf("%f", &c);

    
    far = (c * 9/5) + 32;

    printf("temp. in F° is %f", far);

    return 0;
}

