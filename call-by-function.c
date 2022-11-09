//call-by-function

#include <stdio.h>
void goodmorning ();
void goodafternoon ();
void goodnight ();

int
main ()
{
  goodmorning ();
  goodafternoon ();
  goodnight ();


  return 0;
}

void
goodmorning ()
{
  printf ("morning bro\n");
}

void
goodafternoon ()
{
  printf ("afternoon bro\n");

}

void
goodnight ()
{
  printf ("night bro\n");
}
