#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet
* Return: print 0
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
			if (j == 122)
			{
				_putchar('\n');
			}
		}
	}
}
