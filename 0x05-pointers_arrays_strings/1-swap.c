#include "main.h"
/**
* swap_int - checks for lowercase character
* @a: character to check
* @b: character to check
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int temporal = *a;
	*a = *b;
	*b = temporal;
}
