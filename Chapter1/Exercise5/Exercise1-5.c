#include <stdio.h>

/* print Fahrenheit-Celsius table*/
/* ORIGINAL CODE
main()
{
  int fahr;
  
  
  for(fahr=0;fahr<=300; fahr = fahr + 20)
    
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  
}
*/



/*--------------------REVERSE ORDER----------------------*/
main()
{
  int fahr;
  
  
  for( fahr = 300; fahr >= 0; fahr -= 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  
}