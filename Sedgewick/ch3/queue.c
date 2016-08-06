#include <stdio.h>
#include <stdlib.h>

typedef struct Element
{
	int key;
	struct Element * next;
} node;

node * head = NULL;
node * tail = NULL;

void put(int v);
int get(void);
void print();
void status();

int main (int argc, char const *argv[])
{
	char c;
	int v;
	do
	{
		printf("Opções:\n\t(p)ut\n\t(g)et\n\tp(r)int\n\t(q)uit\n");
		scanf(" %c", &c);
		if (c == 'p')
		{
			printf("put. Valor?\n");
			scanf(" %d", &v);
			put(v);
		}
		else if (c == 'g')
		{
			if (head == NULL && tail == NULL)
			{
				printf("Queue vazio.\n");
			}
			else
			{
				printf("get. Valor: %d\n", get());
			}
		}
		else if (c == 'r')
		{
			if (head == NULL && tail == NULL)
			{
				printf("Queue vazio.\n");
			}
			else
			{
				printf("Estado do queue:\n");
				print();				
			}
		}
		else if (c != 'q')
		{
			printf("Opção inválida.\n");
		}
	} while (c != 'q');
	return 0;
}
void status()
{
	printf("Head at %p holds key %d points to %p\n", &head, head -> key, head);
	printf("*Head at %p holds key %d next is %p\n", head, head -> key, head -> next);
	printf("Tail at %p holds key %d points to %p\n", &tail, tail -> key, tail);
	printf("*Tail at %p holds key %d next is %p\n", tail, tail -> key, tail -> next);
}
void print()
{
	if (head == NULL && tail == NULL)
		return;
	
	node * t = head;
	
	printf("%d", t -> key);
	while(t != t -> next)
	{
		printf("-");
		t = t -> next;
		printf("%d", t -> key);
	}
	
	printf("\n");
	return;
}
void put(int v)
{
	node * temp = malloc(sizeof(node));
	temp -> key = v;
	temp -> next = temp;
	
	if (head == NULL && tail == NULL)
	{
		head = temp;
	}
	else
	{
		tail -> next = temp;
	}
	tail = temp;
	return;
}

int get(void)
{
	int v;
	node * temp;
	
	if (head == NULL && tail == NULL)
	{
		return -1;
	}
	
	temp = head;
	v = temp -> key;

	if (head == head -> next)
	{
		head = NULL;
		tail = NULL;
	}
	else
	{
		head = head -> next;
	}
	
	free(temp);
	return v;
}