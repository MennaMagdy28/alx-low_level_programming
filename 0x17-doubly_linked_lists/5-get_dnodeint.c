<<<<<<< HEAD
#include "lists.h"
/**
* get_dnodeint - get node at the index
*
* @head: head of the list
* @index: index the element
* Return: element
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *h;

h = *head;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);
if (h != NULL)
{
while (h->prev != NULL)
{
h = h->prev;
}
}
int i = 0;
while (h != NULL)
{
if (i == index)
break;
h = h->next;
}
return (h);
}
