#include <stdio.h>

/*
  Write a function invert (x,p,n) that returns 
  x with the n bits that begin at position p 
  inverted (i.e., 1 changed into 0 and vice versa), 
  leaving the others unchanged.
*/

unsigned invert(unsigned x,int p, int n)
{
  int bit = 1;
  int i;
  for(i = 0; i < n; i++)
  {
    x = x ^bit;
    bit << 1;
    
  }
  return x;
}


int main()
{
  unsigned x = 0xF0F;
  int p = 4;
  int n = 5;
  unsigned output;
  
 output = invert(x,p,n);
  
  
  return output;
}

