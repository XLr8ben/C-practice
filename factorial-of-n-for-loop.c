//factorial-of-n-for-loop

#include <stdio.h>

int
main ()
{
  int a, n, fac = 1;
  printf ("enter n: ");
  scanf ("%d", &a);

  for (n = 1; n <= a; n++)
    {
      fac *= n;
    }
  printf ("factorial of %d is: %d", a, fac);


  return 0;
}

