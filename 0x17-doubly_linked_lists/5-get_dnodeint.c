#include "lists.h"
/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
  * @head:pointer to the head node
  * @index:index of node to search
  * Return:address of the node at index starting from 0
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count;

	node = head;
	while (node != NULL && count <= index)
	{
		if (count == index)
		{
			return(node);
		}
		node = node->next;
		count++;
	}
	return (NULL);
}
