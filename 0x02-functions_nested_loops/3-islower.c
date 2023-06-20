#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	for (c = 97; c <= 122; c++)
	{
		if (c)
		{
			return (1);
		}
		else 
		{
			return (0);
		}
	}
	_putchar('\n');
}
