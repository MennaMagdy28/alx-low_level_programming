#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
*/
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ( curr != NULL)
		{
			free(curr)
			curr = curr->next;
		}
		*head = NULL;
	}
}
