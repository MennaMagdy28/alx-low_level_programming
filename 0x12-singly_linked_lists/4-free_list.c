#include "lists.h"

/**
 * free_list - free list
 * @head: pointer to list
*/
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}

}
