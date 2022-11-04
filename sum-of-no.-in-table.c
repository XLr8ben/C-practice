//sum-of-no.-in-table

#include <stdio.h>

int
main ()
{
  int a, n, c = 0, sum = 0;
  printf ("enter n: ");
  scanf ("%d", &a);

  for (n = 1; n <= 10; n++)
    {
      c = n * a;
      sum = sum + c;

    }
  printf ("sum of table is: %d", sum);

  return 0;
}
