#include "main.h"

/**
 * add_node_end - add new node at the end of the list
 * @head: pointer to the *head
 * @str: string
 *
 * Return: address of the new element, NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *lastNode;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);

	if (ptr->str == NULL)
	{
		free(ptr);
		return(NULL);
	}
	ptr->len = strlen(ptr->str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = ptr;
	}
	return (ptr);
}
