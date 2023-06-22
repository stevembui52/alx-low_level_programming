#include "main.h"
/**
 * more_numbers - prints 0 t0 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a, b;

	for (b = 0; b <= 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + 48);
			}
			_putchar((a % 10) + 48);
		}
		_putchar('\n');
	}
}
