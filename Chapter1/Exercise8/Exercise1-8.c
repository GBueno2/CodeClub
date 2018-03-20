#include <stdio.h>


main()
{
  
  int character = 0, blanks = 0, tabs = 0, newlines = 0;
  
  
  while((character = getchar()) != EOF)
  {
    if (character == ' ') //Looking for blanks
    {
      blanks++;                   
    }
    else if (character == 0x09) //Looking for tabs, ascii representation of a tab
    {
      tabs++;
    }
    else if (character == '\n') //Looking for a new line
    {
      newlines++;
    }
   }
  
  printf("\n Totals:\n Blanks = %d\n Tabs = %d\n Newlines = %d", blanks, tabs, newlines);
  
}