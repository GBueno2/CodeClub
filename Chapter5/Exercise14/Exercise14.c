#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exercise 14: Modify the sort program to handle a -r flag, which
  indicates sorting in reverese(decreasing) order. Be sure the -r works with -n.
*/

#define MAXLINES	5000		/* max #lines to be sorted*/
char	*lineptr[MAXLINES];		/* pointers to text lines*/

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);

void qsort(void *lineptr[], int left, int right, int (*comp)(void *, void *));
int numcmp(char *, char *);


/*sort input lines*/
main(int argc, char *argv[])
{


	int n lines;		/* number of input lines read */
	int numeric = 0;	/* 1 if numeric sort */

	if(argc > 1 && strcmp(argv[1], "-n") == 0)
		numeric = 1;

	if((nlines = readlines(lineptr, MAXLINES)) >= 0)
	{
		qsort((void **) lineptr, 0, nlines-1, (int (*)(void*,void*))(numeric ? numcmp : strcmp));
		writelines(lineptr,nlines);
		return 0;
	}
	else
	{
		printf("input too big to sort\n");
		return 1;

	}
}

