#include "main.h"
/**
 * *_strcat - concatenate strings
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	while (*dest !='\0')
	{
		dest ++;
	}
	while (*src !='\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	return (dest);
}
