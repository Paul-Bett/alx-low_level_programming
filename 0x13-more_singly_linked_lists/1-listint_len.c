#include <stdio.h>
#include "lists.h"

/**
 * listint_len - number of elements in list
 *
 * @h: pointer to first element
 *
 * Return: size of listint_t
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while(*h != Null)
	{
		count++;
		h = h->next;
	}
	return (count)
}

