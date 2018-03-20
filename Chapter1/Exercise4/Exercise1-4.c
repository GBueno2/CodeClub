#include <stdio.h>

/* print Celcius-Fahrenheit table 
    for celcius = 0, 20, ..., 300; floating-point version */


main()
{
  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;
  
  fahr = lower;
  printf("---------------------------------------------------------------------------\n");
  printf("----------------------Celcius-Fahrenheit-----------------------------------\n");
  printf("---------------------------------------------------------------------------\n");
  while (celsius<=upper)
  {
    fahr = (9.0 / 5.0) * celsius + 32.0;
    printf("%6.1f %3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
  
  
}