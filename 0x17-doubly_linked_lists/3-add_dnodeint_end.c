#include "lists.h"
/**
  * add_dnodeint_end - function that adds a new node at the end of a dlistint_t list.
  * @head:head pointer of the list
  * @n:element of the list
  * Return:the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint *curr;
	
	if (new == NULL)
	{
		printf("memory allocation failed\n");
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head === NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new;
		curr->prev = *head;
	}
	return (new);
}
