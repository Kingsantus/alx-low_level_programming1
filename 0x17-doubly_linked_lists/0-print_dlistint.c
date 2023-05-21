#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements printed.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	if (!h)
		return (count);

	while (ptr != NULL)
	{
		printf("%d \n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
