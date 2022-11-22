//Use the pointers and print the values of sum and average
#include <stdio.h>

void SumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float)*sum/2;
}

int main()
{
    int i, j, sum;
    float avg;
    printf("Enter a\n");
    scanf("%d", &i);
    
    printf("Enter b\n");
    scanf("%d", &j);
    
    SumAndAvg(i, j, &sum, &avg);
    printf("Sum is %d\n", sum);
    printf("Average is%.2f", avg);

    return 0;
}
