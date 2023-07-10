#include "main.h"
#include <stdlib.h>
/**
 *create_array - create an array of chars, and initializes with specific char
 *@size:indicates the number of characters in the array
 *@c:specifies the character with which the array will be initialized.
 *Return:pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *h;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	h = malloc(sizeof(c) * size);
	if (h == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		h[i] = c;
	}
	return (h);
}
