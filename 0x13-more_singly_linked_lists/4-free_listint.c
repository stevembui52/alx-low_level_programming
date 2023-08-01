#include "lists.h"
/**
 * free_listint - frees the list listint_t
 *@head - head of the list
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while((tmp =head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
