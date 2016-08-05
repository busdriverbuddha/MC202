#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int key;
	struct Node * next;
};

static struct Node * head, *z, *t;

void stackinit();
void push(int v);
int pop(void);
int stackempty(void);

int main (int argc, char const *argv[])
{
	char c;
	int x;
	
	for (stackinit(); scanf("%1s", &c) != EOF;)
	{
		x = 0;
		if (c == '+')
			x = pop() + pop();
		if (c == '*')
			x = pop() * pop();
		while (c >= '0' && c <= '9')
		{
			x = 10 * x + (c - '0');
			scanf("%1c", &c);
		}
		push(x);
	}
	
	printf("%d\n", x);
	
	return 0;
}

void stackinit()
{
	head = malloc(sizeof(struct Node *));
	z = malloc(sizeof(struct Node *));
	head -> next = z;
	head -> key = 0;
	z -> next = z;
}

void push(int v)
{
	t = malloc(sizeof(struct Node *));
	t -> key = v;
	t -> next = head -> next;
	head -> next = t;
}

int pop(void)
{
	int x;
	t = head -> next;
	head -> next = t -> next;
	x = t -> key;
	free(t);
	return x;
}

int stackempty(void)
{
	return head -> next == z;
}