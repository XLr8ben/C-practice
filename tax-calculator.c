/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float income, tax = 0;
    printf("enter ur income\n");
    scanf("%f", &income);

    if(income >= 250000 && income <= 500000){
        tax = tax + 0.05 * (income - 250000);
    }
      if(income >=500000 && income <=1000000){
          tax = tax + 0.20 *(income - 500000);
      }
       if(income >=1000000){
           tax = tax + 0.30 *(income - 1000000);
       }
       printf("ur tax to be paid is%f\n", tax);
    return 0;
}