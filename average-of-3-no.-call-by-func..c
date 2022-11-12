#include <stdio.h>
float average (int x, int y, int z);

int
main ()
{
  int x, y, z;
  printf ("Enter the value of x\n");
  scanf ("%d", &x);

  printf ("Enter the value of y\n");
  scanf ("%d", &y);

  printf ("Enter the value of z\n");
  scanf ("%d", &z);

  printf ("The average of x,y,z is %.2f", average (x, y, z));

  return 0;
}

float
average (int x, int y, int z)
{
  float result;
  result =(float)(x + y + z) / 3;
  return result;
}

