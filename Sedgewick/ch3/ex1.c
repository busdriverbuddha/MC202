#include <stdio.h>
#include <stdlib.h>
#include "gcd.h"

#define MAX 10

int main (int argc, char const *argv[])
{
	int a[MAX][MAX];
	int i, j;
	for (i = 1; i < MAX; i++)
	{
		printf("i = %d j = %d\n", i, j);
		for (j = 1; j < MAX; j++)
		{
			if (gcd(i, j) == 1)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}
	return 0;
}
