#include "main.h"
/**
* puts2 - prints every other character of a spring
* @str: character to check
* Return: 0
*/
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str += 2;
	}
	_putchar(10);
}
