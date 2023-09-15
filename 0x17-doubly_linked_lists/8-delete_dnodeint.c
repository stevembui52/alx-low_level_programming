#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of linked list
 * @index:  index of the node that should be deleted
 * Return: 1 if success and -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	curr = *head;
	count = 0;
	while (curr != NULL && count < index)
	{
		curr = curr->next;
		count++;
	}
	if (curr == NULL)
		return (-1);
	if (count == index)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(curr);
			return (1);
		}
		if (curr == (*head))
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(curr);
			return (1);
		}
		if (curr->next == NULL)
		{
			curr->prev->next = NULL;
			free(curr);
			return (1);
		}
		curr->next->prev = curr->prev;
		curr->prev->next = curr->next;
		free(curr);
		return (1);
	}
	return (-1);
}
