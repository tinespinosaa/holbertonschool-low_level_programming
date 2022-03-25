#include "main.h"
/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
* Return: number of bits you would need to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned long int i;

	xor = n ^ m;
	for (i = 0; xor != '\0'; )
	{
	if (xor & 1)
		i++;

	xor >>= 1;
	}
	return (i);
}
