#include "lists.h"

/**
 * print_dlistint: loop through node using ptr
 * dlistint_t@ initialize ptr to h
 * count@ is incemented through loop to print next node
 *
 * return: return count
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		printf("%d \n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
