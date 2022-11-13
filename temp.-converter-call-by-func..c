//Convert temperature from Celcius to Farhenheit(Call by function)

#include <stdio.h>
float temp (int c);

int main ()
{
  int c;
  printf ("Temp. in Celcius: ");
  scanf ("%d", &c);

  printf ("Temp in Fahrenheit: %.2f", temp (c));
  return 0;
}

float temp (int c){
  float far = (float) (c * 9 / 5) + 32;
  return far;
}
