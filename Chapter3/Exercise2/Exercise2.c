/* Write a function escape(s,t) that converts characters like newline and tab into visible
escape sequences like \n and \t as it copies the string t to s. Use a switch. 

Write a function for the other direction as well, converting escape sequences into the real characters
*/


#include <stdio.h>


int main()
{
  int limit_of_characters = 100; 
  char t1[limit_of_characters] = "hola comor \n estas      \t \t senor?";
  char s1[limit_of_characters];
  
  escape(s1,t1);

  printf("\n%s",s1);
  
  return 0;
}


void escape(char s[], char t[]);

void escape(char s[], char t[])
{
  
  int i,j;

    i=j=0;

    while(t[i] != '\0')
    {
        switch(t[i])
        {
            case '\t':
                    s[j]='\\';
                    ++j;
                    s[j]='t';
                    break;
            case '\n':
                    s[j]='\\';
                    ++j;
                    s[j]='n';
                    break;
            default:
                    s[j]=t[i];
                    break;
        }
        ++i;
        ++j;
    }
    s[j]='\0';
}

