
#include<stdio.h>


/* copy input to output; 1st Version */



main  ()
{
    int c;
  
    while ((c = getchar()) != EOF) 
    {
        putchar(c);
    }
    printf("\n%d\n", c != EOF);
}

// expression getchar() != EOF is 0