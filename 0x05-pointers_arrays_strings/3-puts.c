#include "main.h"
/**
* _puts - prints a string, followed by a new line, to stdout
* @str: character to check
* return: 0
*/
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar(10);
}
