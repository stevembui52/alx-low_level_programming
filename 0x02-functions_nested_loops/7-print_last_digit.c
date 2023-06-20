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
	int ld;

	ld=ml % 10;
	if (ld < 0)
	{
		ld=ld * -1;
	}
	_putchar(ld + 48);
	return (ld);
}

