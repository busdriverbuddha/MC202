#include <stdio.h>

int main (int argc, char const *argv[])
{
	int u, v;
	do
	{
		scanf(" %d %d", &u, &v);
		printf("%d\n", u % v);
	} while (u != 0 && v != 0);
	return 0;
}