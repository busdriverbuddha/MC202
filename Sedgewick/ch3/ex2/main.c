#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#define MAX 30

int main (int argc, char const *argv[])
{
	node * head = initList();
	int i;
	for (i = 0; i < MAX; i++)
		addafterhead(head, i);

	printlist(head);
	
	for (i = 0; i < MAX; i++)
		if (i % 3 == 0)
			delete(head, i);	
	
	printlist(head);
	
	for (i = 0; i < MAX; i++)
		if (i % 4 == 0)
			addafter(head, i, 0);
	
	printlist(head);
	
	return 0;
}
