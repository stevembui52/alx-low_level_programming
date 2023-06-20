#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @l:integer number
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int ml)
{
	int last;

	last = ml % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
