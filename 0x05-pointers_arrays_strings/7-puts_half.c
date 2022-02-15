#include "main.h"
/**
* puts_half - prints sedcond half of a string
* @str: character to check
* Return: 0
*/
void puts_half(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (*str >= 53)
		_putchar(*str);
		i++;
		str++;
	}
	_putchar(10);
}
