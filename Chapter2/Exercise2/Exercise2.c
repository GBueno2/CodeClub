#include <stdio.h>


/* Write a loop equivalent to the for loop above without using && and ||.

LOOP GIVEN ABOVE: for(i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
                      s[i] = c;
 */





int main()
{
    int i = 0;
    lim = 50;
   char s[lim] = {};
  
  while(i<lim-1)
    {
      while((c=getchar()) != '\n')
      {
        while(c!=EOF)
        {
          s[i] = c;
          i++;
        }
      }
      
    }
  
  return 0;
}