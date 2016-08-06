#include <stdio.h>

unsigned long long int binary(int n);

int main(void)
{
	int n;
	
	while(1)
	{
		scanf(" %d", &n);
		printf("%llu\n", binary(n));
	}
}

unsigned long long int binary(int n)
{
	unsigned long long int value = 0, zerotail = 1;
	while (n % 2 != 1)
	{
		zerotail *= 10;
		n /= 2;
	}
	
	while (n > 0)
	{
		value *= 10;
		value += n % 2;
		n /= 2;
	}
	
	value *= zerotail;
	
	return value;
}