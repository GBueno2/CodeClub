#include <stdio.h>
#include <stdlib.h>

/* Exercise 14: Modify the sort program to handle a -r flag, which
  indicates sorting in reverese(decreasing) order. Be sure the -r works with -n.
*/



int main() 
{
  
  printf("\nThis program is still under works\n");
  
  return 0;
}


/* qsort: sort v[left] ... v[right] into increasing order*/

void qsort(void *v[], int left, int right, int (*comp)(void *, void *))
{
  
  int i, last;
  void swap(void *v[], int, int);
  
  if(left>=right) /*do nothing if array contains*/
    return;       /*fewer than two elements*/
  swap(v,left,(left+right)/2);
  
  last=left;
  for(i=left+1; i<=right; i++)
      if((*comp) (v[i],v[left])<0)
          swap(v,++last,i);
  
  swap(v,left,last);
  qsort(v,left,last-1,comp);
  qsort(v,last+1,right,comp);

}


void swap(void *v[], int i, int j)
{
  
  void *temp;
  temp = v[i];
  v[i]=v[j];
  v[j]=temp;
  
}