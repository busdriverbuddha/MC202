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
	int a, b, c, gcd1, gcd2;
	scanf(" %d %d %d", &a, &b, &c);
	gcd1 = gcd(a, b);
	gcd2 = gcd(b, c);
	printf("%d %d %d %d\n", a, b, c, gcd(gcd1, gcd2));
	
	return 0;
}