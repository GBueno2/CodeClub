#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Write a function strend(s,t), which returns 1 if the string t
  occurs at the end of the string, s and zero otherwise.
*/

#define MAX_STRING_LENGTH     (800)

//FUNCTION PROTOTYPE
int strends(char s[], char t[]);


/*
  Since we are only worried about it occurring at the end of the string then
  I check from the end of the string to the beginning. If it doesn't occur
  exactly at the end then the function will output 0.
*/


int main()
{
  int PASS=0;
  char String[MAX_STRING_LENGTH];   //Initialize a character array
  char Test[MAX_STRING_LENGTH];
  
  printf("\nPlease type in first string: ");
  fgets(String,MAX_STRING_LENGTH, stdin);
  
  printf("\n\nNow type in the second string that should be at the end of the first string: ");
  fgets(Test, MAX_STRING_LENGTH,stdin);
  
  PASS=strends(String,Test);
  
  if(PASS==0)
  {
    printf("\nThe second string was not found at the end of the first string.\nTry again.\n\n");
  }
  
  else if(PASS==1)
  {
    printf("\nThe second string was found at the end of the first string.\n\n");
  }
    
  return 0;
}

//FUNCTION DEFINITION
int strends(char s[], char t[])
{  
  if( (strlen(s)) < (strlen(t)) )  //if the string s is less in length that string t then return 0
  {
    return 0;
  }
  if( strlen(s)==1 && strlen(t)==1)
  {
    if(s[0]==0)
    {
      printf("\nNo Input was given. Please enter something to test this program\n\n");
      return 0;
    }
  }
  else
  {
    int i;;
    int j = strlen(t);
    for(i=strlen(s); i>=0; i--)
    {
      if(s[i]!=t[j])
      {
        return 0;
      }
      if((j==0) && (s[i]==t[j]))
      {
        return 1;
      }
      else
      {
        j--;
      }
    }
  }
  return 0;
}
