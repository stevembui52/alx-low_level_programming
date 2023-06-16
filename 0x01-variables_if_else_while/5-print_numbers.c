#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int bus;

	for (bus = 48; bus <= 57; bus++)
	{
		putchar(bus);
	}
	putchar ('\n');
	return (0);
}
