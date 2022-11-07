/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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
