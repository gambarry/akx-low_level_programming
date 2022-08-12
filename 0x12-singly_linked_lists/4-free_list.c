#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		free(head->str);
		current = head->next;
		free(head);
		head = current;
	}
}
