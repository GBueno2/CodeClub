
/*
  Write a recursive version of the functon reverse(s) which reverses
  the string s in place
*/


#include<stdio.h>
#include<string.h>

#define MAX_CHAR  1000

void reverse(char s[], int index, int length);



int main(void)
{
    char string[MAX_CHAR];
    int length;
 
    scanf("%s", string);
    length = strlen(string);
    reverse(string, 0, length - 1);
    printf("%s\n",string);
    
    return 0;
}

void reverse(char string[], int index, int length)
{
    char temp;
    temp = string[index];
    string[index] = string[length - index];
    string[length - index] = temp;
    if (index == length / 2)
    {
        return;
    }
    reverse(string, index + 1, length);
   
}

