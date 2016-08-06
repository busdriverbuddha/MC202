#include <stdio.h>

struct Fraction
{
	int num;
	int den;
};

int gcd(int u, int v);
void printFrac(struct Fraction f);

int main(void)
{
	struct Fraction f, g;
	int d;
	
	do
	{
		scanf(" %d %d", &f.num, &f.den);
		if (f.den == 0)
			break;
		printf("Received:\n");
		printFrac(f);
		
		d = gcd(f.num, f.den);
		printf("gcd = %d\n", d);
		
		g.num = f.num / d;
		g.den = f.den / d;
		
		printf("Simplified:\n");
		printFrac(g);
		
	} while(1);
	
	return 0;
}

void printFrac(struct Fraction f)
{
	int ndig = 0, ddig = 0, maxdig, spaces, i, n, d;
	n = f.num;
	d = f.den;
	
	while (n > 0)
	{
		n /= 10;
		ndig++;
	}
	
	while (d > 0)
	{
		d /= 10;
		ddig++;
	}
	
	if (ndig > ddig)
		maxdig = ndig;
	else
		maxdig = ddig;
	
	spaces = (maxdig - ndig) / 2;
	
	for (i = 0; i < spaces; i++)
		printf(" ");
	printf("%d\n", f.num);
	
	if (f.den != 1)
	{		
		for (i = 0; i < maxdig; i++)
			printf("-");
		printf("\n");
		spaces = (maxdig - ddig) / 2;
	
		for (i = 0; i < spaces; i++)
			printf(" ");
		printf("%d\n", f.den);
	}
	
	return;
}

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