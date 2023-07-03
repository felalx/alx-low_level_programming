#include "lists.h"

/**
 * list_len -  it returns the number of elements contained in a list.
 * @h: contains singly linked list.
 * Return: Returns the number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
