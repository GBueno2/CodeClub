
/*
  Define a macro swap(t,x,y) that interchanges two arguments of type t.
  (Block structure will help)
*/

#include <stdio.h>
#include <stdlib.h>

#define   swap(t,x,y) {\
              t temp;\
              temp = x;\
              x = y;\
              y = temp;\
              }

int main()
{
  char test1, test2 ;
  test1 ='1';
  test2 = '2';
 
  swap(char,test1,test2);
  printf("x=%c\ny=%c\n",test1,test2);
  
  return 0;
}

