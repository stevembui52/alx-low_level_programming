#include "main.h"
/**
 * main - prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int m;

	for (m = 97; m <= 122; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
