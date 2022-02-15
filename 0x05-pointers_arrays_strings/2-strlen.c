#include "main.h"
/**
* _strlen - checks for lowercase character
* @s: character to check
* Return: 0
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
