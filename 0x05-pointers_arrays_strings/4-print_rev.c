#include "main.h"
/**
* print_rev - checks for  lowercase character
* @s character to check
* Return: 0
*/
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	s--;

	while (i > 0)
	{
		_putchar(*s);
		s = s - 1;
		i--;
	}
	_putchar(10);
}

