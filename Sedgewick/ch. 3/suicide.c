#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *next;
};

int main (int argc, char const *argv[])
{
	int i, n, m;
	struct node *t, *x;
	
	scanf("%d %d", &n, &m);
	t = malloc(sizeof(*t));
	t -> key = 1;
	x = t;
	
	for (i = 2; i <= n; i++)
	{
		t -> next = malloc(sizeof(*t));
		t = t -> next;
		t -> key = i;
	}
	t -> next = x;
	
	while (t != t -> next)
	{
		for (i = 1; i < m; i++)
			t = t -> next;
		x = t -> next;
		t -> next = t -> next -> next;
		printf("%d\n", x -> key);
		free(x);
	}
	
	
	return 0;
}