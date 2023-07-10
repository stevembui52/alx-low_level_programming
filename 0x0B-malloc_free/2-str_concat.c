#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1:first string
 *@s2:second string
 *Return: nothing.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *res;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	res = malloc(sizeof(char) * (len1 + len2 + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; j <=len2; j++)
	{
		res[i + j] = s2[j];
	}
	res[i + j] = '\0';
	return (res);
}
