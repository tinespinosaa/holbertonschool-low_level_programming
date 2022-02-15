#include "main.h"
/**
* puts2 - prints every other character of a spring
* @str: string to be reversed
*/
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		if (i++ % 2 == 0)
			_putchar(str[i - 1]);

	_putchar('\n');
}
