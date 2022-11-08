//project-1-guess-no.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int
main ()
{
  int n, a, b = 1;
  srand (time (0));
  n = rand () % 100 + 1;
  //printf("New no. is %d", n);

  do
    {
      printf ("Guess the no. between 1 to 100\n");
      scanf ("%d", &a);

      if (a > n)
	{
	  printf ("lower no. please\n");
	}
      else if (a < n)
	{
	  printf ("higher no. please\n");

	}
      else
	{
	  printf ("you guessed it in %d attempts\nThe no. was %d", b, n);
	}
      b++;
    }
  while (a != n);
  return 0;
}
