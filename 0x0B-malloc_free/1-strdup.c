#include "main.h"
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str:the string
 *Return:string pointer of an array of chars
 *
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		a[j] = str[j];
	}
	return (a);
}
