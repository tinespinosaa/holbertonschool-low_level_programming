#include <stdio.h>

/**
* main - prints single base 10 numbers starting with 0
* followed by a newline only putchar can be used
* Return: print 0
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
