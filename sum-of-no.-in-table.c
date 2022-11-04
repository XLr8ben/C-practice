/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
