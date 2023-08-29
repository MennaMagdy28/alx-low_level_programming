#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: head of a list
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
