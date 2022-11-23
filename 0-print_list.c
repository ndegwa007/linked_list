#include "main.h"

/**
 * print_list - print nodes
 * @h: pointer to head node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int sum = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		sum++;
	}
	return (sum);
}
