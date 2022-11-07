//prime-no.

#include <stdio.h>

int
main ()
{
  int a, n, prime = 1;
  printf ("Enter no: ");
  scanf ("%d", &a);

  for (n = 2; n < a; n++)
    {
      if (a % n == 0)
	{
	  prime = 0;
	  break;
	}
    }
  if (prime == 0)
    {
      printf ("Not a prime no ");

    }
  else
    {
      printf ("Prime no");
    }


  return 0;
}
