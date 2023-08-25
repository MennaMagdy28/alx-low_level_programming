#include "lists.h"

/**
 * add_node - to add a new node to the list
 * @head: pointer to list
 * @str: string to add
 * Return: pointer to the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int len = 0;

	while (str[len])
		len++;
	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);
	x->str = strdup(str);
	x->len = len;
	x->next = (*head);
	(*head) = new;
	return (*head);
}
