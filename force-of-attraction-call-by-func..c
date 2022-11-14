//Find force of attraction on body having mass (m kgs) due to gravity

#include <stdio.h>

float force(float mass);

int main()
{
    float m;
    printf("Enter mass in kgs\n");
    scanf("%f", &m);

    printf("Force of attraction on body due to gravity is %.2f\n", force(m));
    return 0;
}

float force(float mass){
    float result = mass*9.8;
    return result;
}