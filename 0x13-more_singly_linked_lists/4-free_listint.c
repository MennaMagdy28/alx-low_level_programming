#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list.
*/
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
                free(head);
                head = head->next;
	}
}
