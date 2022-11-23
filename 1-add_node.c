#include "main.h"

/**
 * add_node - add a new node at the beginning of a linked list
 * @head: double pointer points to list_t *head
 * @str: string
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));

	ptr->str = strdup(str);

	if ((ptr->str) == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(ptr->str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
