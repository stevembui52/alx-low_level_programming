#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest:pointer to the destination object
 * @src:pointer to the source object
 * @n:Number of bytes to copy.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
