#include "main.h"
/**
* _isalpha - analize if the character c is alpha
* @c: character to analize
* Return: if is alpha return 1 otherwise returns 0
*/
int _isalpha(int c)
{
	int i;

	for (i = 65; i < 123; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
return (0);
}
