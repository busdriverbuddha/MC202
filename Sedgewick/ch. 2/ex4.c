#include <stdio.h>

int convert()
{
	int value = 0;
	char buffer;
	do
	{
		buffer = getchar();
		if (buffer == ' ' || buffer == '\n')
			break;
		if (buffer >= 48 && buffer <= 57)
		{
			value *= 10;
			value += buffer - 48;		
		}
	} while(1);
	return value;
}

int main(void)
{
	int a = convert();
	printf("%d\n", a);
	return 0;
}