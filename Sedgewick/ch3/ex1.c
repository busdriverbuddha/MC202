#include <stdio.h>
#include <stdlib.h>
#include "gcd.h"

#define MAX 50

int main (int argc, char const *argv[])
{
	int a[MAX][MAX];
	int i, j, g;
	for (i = 1; i < MAX; i++)
	{
		for (j = 1; j < MAX; j++)
		{
			g = gcd(i, j);
			if (g == 1)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}
	for (i = 1; i < MAX; i++)
	{
		printf("[%d]\t", i);
		for (j = 1; j < MAX; j++)
		{
			if (a[i][j] != 0)
				printf(" ");
			else
				printf("#");
		}
		printf("\n");
	}
	return 0;
}
