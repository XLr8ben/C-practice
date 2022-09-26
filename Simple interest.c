//Simple interest calculator
#include <stdio.h>

int main()
{
    float p, r, t, far;
    printf("Given Principle\n");
    scanf("%f", &p);

    printf("Given Rate\n");
    scanf("%f", &r);

    printf("Given Time\n");
    scanf("%f", &t);

    far = (p * r * t)/100;

    printf("Calculated Simple Interest is%f", far);
    return 0;
}
