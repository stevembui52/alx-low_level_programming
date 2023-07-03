#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s:ointer to the character
 * @c:character to be located
 * Return:0 if no character found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (0);
}
