#include <stdio.h>

int gcd(int u, int v)
{
	int t;
	while (u > 0)
	{
		if (u < v)
		{
			t = u;
			u = v;
			v = t;
		}
		u = u - v;
	}
	return v;
}

int main(void)
{
	int a, b, maxa = 0, maxb = 0, maxsum = 0;

	for (a = 2147483647; a > 2147000000; a--)
		for (b = a - 1; b > 2147000000; b--)
	{
		if (gcd(a, b) == 1)
		{
			printf("%d %d %d\n", a, b, gcd(a,b));
			break;
		}
		break;
	}
	
	
	return 0;
}