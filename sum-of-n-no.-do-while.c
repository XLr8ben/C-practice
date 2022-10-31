/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int a, sum = 0, n = 1;
  printf ("enter natural no: ");
  scanf ("%d", &a);

  do
    {
      sum += n;
      n++;

    }
  while (n <= a);
  printf ("sum of n: %d", sum);

  return 0;
}
