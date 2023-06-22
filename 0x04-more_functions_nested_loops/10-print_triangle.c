#include "main.h"

/**
 * print_triangle - prints a right angled triangle
 *@size:size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int p, q;

	for (p = 0; p < size; p++)
	{
		for (q = 0; q < (size - p); q++)
		{
			_putchar(' ');
		}
		for (q--; q < size; q++)
		{
			_putchar(35);
		}
		if (p < size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
