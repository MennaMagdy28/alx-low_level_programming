#include "lists.h"

/**
* free_dlistint - frees a dlistint_t list
*
* @head: head of the list
* Return: no return
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *h;
dlistint_t *tmp;

h = head;
if (h == NULL)
return (NULL);
while (h->next != NULL)
h = h->next;
while (h->prev != NULL)
{
tmp = h->prev;
free(h);
tmp->next = NULL;
h = tmp;
}
}
