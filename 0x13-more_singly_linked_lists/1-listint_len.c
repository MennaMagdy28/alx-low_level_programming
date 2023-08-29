#include "lists.h"

/**
 * listint_len - calculate the number of elements in linked list
 * @h: head of a list
 * Return: n
*/

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
