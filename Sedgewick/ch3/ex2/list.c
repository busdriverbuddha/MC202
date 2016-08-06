#include <stdio.h>
#include <stdlib.h>
#include "list.h"

node * initList(void)
{
	node * head = malloc(sizeof(node));
	head -> key = 0;
	head -> next = head;
	return head;
}

int addafterhead(node * head, int keytoadd)
{
	node * temp = malloc(sizeof(node));
	temp -> key = keytoadd;
	if (head -> next == head)
		temp -> next = temp;
	else
		temp -> next = head -> next;
	head -> next = temp;
	return 0;
}

int addafter(node * head, int target, int keytoadd)
{
	node * t = head -> next;
	node * temp;
	
	while (t -> key != target && t != t -> next)
		t = t -> next;
	
	if (t -> key != target)
		return 1;
	
	temp = malloc(sizeof(node));
	temp -> key = keytoadd;
	if (t == t -> next)
		temp -> next = temp;
	else
		temp -> next = t -> next;
	t -> next = temp;
	return 0;
}

int delete(node * head, int keytodel)
{
	//printf("delete called for %d\n", keytodel);
	node * t = head -> next;
	node * temp;
	//printf("t = %p\n", (void *) t);
	while (t -> next -> key != keytodel && t != t -> next)
	{
		//printf("t -> next -> key = %d, t = %p, t -> next = %p\n", t -> next -> key, (void *) t, (void *) t -> next);
		t = t -> next;		
	}
	//printf("t -> next -> key = %d, t = %p, t -> next = %p\n", t -> next -> key, (void *) t, (void *) t -> next);
	
	if (t -> next -> key != keytodel)
		return 1;
	
	temp = t -> next;
	
	if (temp == temp -> next)
	{
		free(temp);
		t -> next = t;
	}
	else
	{		
		t -> next = temp -> next;
		free(temp);
	}
	
	//printf("t @ %p t -> next @ %p t -> key is %d\n", (void *) t, (void *) t -> next, t -> key);
	
	return 0;
}

void printlist(node * head)
{
	node * t = head;
	if (head -> next == head)
		return;
	
	do
	{
		t = t -> next;
		printf("%d ", t -> key);
	} while (t != t -> next);
	
	printf("\n");
	return;
}
