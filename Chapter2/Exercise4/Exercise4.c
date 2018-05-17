#include <stdio.h>
/*
  Write an alternate version of squeeze(s1,s2)
  that deletes each character 
  in s1 that matches any character in the string s2.
*/

int main()
{
  
  char a[] = {"grpyyyyouuuut kpit"}; 
  char b[] = {"pryuk"};
  

  printf("%s\n",a);
  printf("%s\n", b);
  
  
  squeeze(s1,s2);
  
  return 0;
}

void squeeze(char s1[], char s2[])
{
  int i, j;
  int index = 0;
  
  for(i = 0; s1[i] != '\0'; i++)
  {
    for(j = 0; s2[j] != '\0'; j++)
    {
      if(s2[j] == '\0')
      {
        s1[k] = s1[i];
        k++;
      }
      
    }
    
  }
  s1[k] = '\0';
}