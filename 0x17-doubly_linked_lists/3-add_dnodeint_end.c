#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end
* of a dlistint_t list
*
* @head: head of the list
* @n: value of the element
* Return: the address of the new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node;
dlistint_t *h;

h = *head;
node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);
node->next = NULL;
node->n = n;
if (h != NULL)
{
while (h->next != NULL)
{
h = h->next;
}
}
node->prev = h;
h->next = node;
*head = node;
return (node);
}
