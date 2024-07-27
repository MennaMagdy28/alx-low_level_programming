#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *node;
    dlistint_t *h;

    h = *head;
    node = malloc(sizeof(dlistint_t));
    if(node == NULL)
        return (NULL);
    node->prev = NULL;
    node->n = n;
    if (h != NULL)
    {
        while (h->prev == NULL)
        {
            h = h->prev;
        }
    }
    node->next = h;
    h->prev = node;
    *head = node;
    return (node);
}