#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int bus;

	for (bus = 0; bus <= 9; bus++)
	{
		putchar(bus);
	}
	putchar ('\n');
	return (0);
}
