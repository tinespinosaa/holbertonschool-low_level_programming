#include "lists.h"
/**
* free_list - frees a list_t list
* @head: first element of the list
* Return: no return
*/
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
