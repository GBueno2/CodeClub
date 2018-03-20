#include <stdio.h>


/* copy input to output; 1st Version */

main()
{
  int c;
  c = getchar();
  while( c != EOF)
  {
    putchar(c);
    c = getchar();
  }
  
}