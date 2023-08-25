#include "lists.h"

/**
 * list_len - count the list length
 * @h: pointer to the list
 * Return: len
*/
size_t list_len(const list_t *h)
{
	unsigned int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
