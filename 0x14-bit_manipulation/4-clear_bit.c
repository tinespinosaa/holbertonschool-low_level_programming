#include "main.h"
/**
* clear_bit - function that sets
* @n: decimal number
* @index: is the index, starting from
* Return: if it worked, or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = ~(1 << index);

	if (index > 63)
		return (-1);

	*n = *n & i;

	return (1);
}
