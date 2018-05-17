#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int ReverseInteger(int a) 
{
  int length = 32; //32 bit integer
  int i;
  int j = length;
  int mask = 1;
  int temp = 0;
  
  for(i = 0; i<length; i++)
  {
    j = j -1;
   temp = temp | (((a>>i) & mask)<<j);
  }
  return temp;
  
}

int main() {
    int initial = 43261596; 
    int reverse;
  
    printf("Initial Integer = %d \n", initial);
    reverse = ReverseInteger(initial);
    printf("Reversed Integer = %d\n",reverse);
    return 0;
}
