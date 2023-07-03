#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s:the first pointer sting
 * @accept:the searchinf pointer string
 * Return:pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp;

	while (*s != '\0')
	{
		tmp = accept;
		while (*tmp != '\0')
		{
			if (*s == *tmp)
			{
				return ((char *)s);
			}
			tmp++;
		}
		s++;
	}
	return (0);
}
