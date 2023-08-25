#include "lists.h"

/**
 * add_node_end - add a new node to the list but at the end of it
 * @head: pointer to the first node
 * @str: string
 * Return: pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp1, *temp2;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	tmp1 = malloc(sizeof(list_t));
	if (tmp1 == NULL)
		return (NULL);
	tmp1->str = strdup(str);
	if (tmp1->str == NULL)
	{
		free(tmp1);
		return (NULL);
	}
	while (str[len])
		len++;
	tmp1->len = len;
	tmp1->next = NULL;
	if (*head == NULL)
	{
		*head = tmp1;
		return (tmp1);
	}
	tmp2 = *head;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp1;
	return (tmp1);

}
