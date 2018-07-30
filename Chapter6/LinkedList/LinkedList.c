#include <stdio.h>

/*
 Chapter 6 HW - very rudimentary linked list with add, delete, and print.
- Use structures to implement a very rudimentary singly linked list for integers with an ability to add, delete, and print
- UI can be like the following
- a 5 to add 5 to the list
- d 5 to delete 5 from the list (don’t worry about error reporting and only need to delete one occurrence)
- p to print the list
 */

#define COMMAND_OFFSET	0
#define NUMBER_OFFSET	1


typedef struct Node
[
	int data;
	struct Node *next;
]


void main ()
{
	Node *head = NULL;


  printf("Hello World\n");
  return;
}
