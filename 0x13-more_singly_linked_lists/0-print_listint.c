#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the elements in the list
 * @h: A pointer to listint structure
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_var = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_var++;
	}
	return (nodes_var);
}
