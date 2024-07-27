#include "lists.h"
/**
* get_dnodeint_at_index - get node at the index
*
* @head: head of the list
* @index: index the element
* Return: element
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *h;

h = *head;
if (h == NULL)
return (NULL);
while (h->prev != NULL)
{
h = h->prev;
}
int i = 0;
while (h != NULL)
{
if (i == index)
break;
h = h->next;
i++;
}
return (h);
}
