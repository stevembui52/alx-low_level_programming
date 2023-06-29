#include "main.h"
/**
 * _strncat - concatenated two srings with limited address
 * @dest:pointer to destination string
 * @src:pointer to source sting
 * @n:number of bytes from src
 * Return: destination pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (b < n)
	{
		*(dest + a) = *(src + b);
		if (*(dest + b) == '\0')
		{
			break;
		}
		a++;
		b++;
	}
	return (dest);
}

