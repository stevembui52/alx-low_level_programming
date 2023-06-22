#include "main.h"

/**
 * print_square - prints squares
 *@size:the number of rows and columns
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
		if (a != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
