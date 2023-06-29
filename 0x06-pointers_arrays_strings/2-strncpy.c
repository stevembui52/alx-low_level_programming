#include "main.h"
/**
 * _strncpy - copiys a string
 * @dest:pinter to destination var
 * @src:pointer to source location
 * @n:number of bytes
 * Return:nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
	int p;

	p = 0;
	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}
	return (dest);
}
