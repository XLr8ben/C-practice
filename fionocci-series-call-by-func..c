//Calculate nth term of feanocci series

#include <stdio.h>

int fib (int n);

int main ()
{
  int a;
  printf ("Entert the no: ");
  scanf ("%d", &a);

  printf ("N th element of series is %d", fib(a));

  return 0;
}

int fib (int n)
{
  //printf("call fuction %d\n", n);
  if (n == 1){
    return 0;
   }
   
  else if(n == 2 || n == 3){
      return 1;
    }

  else{
      return fib(n - 1) + fib(n - 2);
    }
}
