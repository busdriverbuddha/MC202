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
		v = u;
		//printf("u = %d v = %d\n", u, v);
	}
	
	return v;
}
