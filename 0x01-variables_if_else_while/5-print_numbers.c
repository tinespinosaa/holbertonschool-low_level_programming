#include <stdio.h>

/**
* main - prints single base 10 numbers starting with 0,
* followed by a newline
* Return: print 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
