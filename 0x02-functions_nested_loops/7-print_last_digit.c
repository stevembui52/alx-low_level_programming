#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @l:integer number
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int l)
{
	int ld;

	ld = l % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}

