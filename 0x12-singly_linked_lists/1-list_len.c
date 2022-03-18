#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* list_len - show the number of elements of a list
* @h: linked list
* Return: the number required
*/
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
	h = h->next;
	/**
	 * next makes sure that h points the next pointer in
	 * the linked list so we prevent to make an infinite loop
	 */
	a++;
	}
	return (a);
}
