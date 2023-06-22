#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		if (a < size)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
