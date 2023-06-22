#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 *@n:number of times it prints
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, m;

	for (i = 0; i < n; i++)
	{
		for (m = 0; m < i; m++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
		{
		_putchar('\n');
		}
	}
	_putchar('\n');
}
