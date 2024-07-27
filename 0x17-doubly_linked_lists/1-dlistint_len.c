#include "lists.h"
/*
* dlistint_len - get length of the list
* @h: pointer to the head
* Return: length
*/
size_t dlistint_len(dlistint_t *h)
{
unsigned long cnt;

cnt = 0;
if (h == NULL)
return (cnt);
while (h->prev != NULL)
{
h = h->prev;
}
while (h != NULL)
{
cnt++;
h = h->next;
}
return (cnt);
}
