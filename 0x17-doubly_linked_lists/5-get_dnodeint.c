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
unsigned int i;

if (head == NULL)
return (NULL);

while (head->prev != NULL)
head = head->prev;

i = 0;

while (head != NULL)
{
if (i == index)
break;
head = head->next;
i++;
}

return (head);
}
