#include "main.h"
/**
* puts_half - prints sedcond half of a string
* @str: character to check
* Return: 0
*/
void puts_half(char *str)
{
	int i, a;

	for (i = 0; str[i] != '\0'; i++)
	{}
	if (i % 2 == 0)
		a = i / 2;
	else
		a = (i / 2) + 1;
	for ( ; a < i; a++)
	{
	_putchar(str[a]);
	}
	_putchar(10);
}
