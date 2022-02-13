#include "main.h"
/**
* _islower - "cheks for lowercase character"
* @c: character description parameter c
* Return: return 1 if is lower
*/
int _islower(int c)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
return (0);
}
