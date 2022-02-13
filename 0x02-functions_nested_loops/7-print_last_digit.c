#include "main.h"
/**
* print_last_digit - print last digit of integer
* @n: integer argument
* Return: value of the last digit
*/
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
		ld = -1 * ld;

	_putchar('0' + ld);

	return (ld);
}
