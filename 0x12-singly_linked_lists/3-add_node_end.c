#include "lists.h"
/**
* *add_node_end - add a node at the end of the  lis_t list
* @head: address of first element of the list
* @str: pointer to string we want to print
* Return: the address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *new_new = *head;
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{}

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (new_new->next)
	new_new = new_new->next;

	new_new->next = new;

	return (new);
}
