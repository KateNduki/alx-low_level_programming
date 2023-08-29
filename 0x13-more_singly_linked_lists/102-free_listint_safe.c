#include "lists.h"

/**
 * free_listint_safe
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements included in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*head = temp;
			len++;
		}
		else
		{
			*head = NULL;
			len++;
			break;
		}
	}

	*head = NULL;

	return (len);
}
