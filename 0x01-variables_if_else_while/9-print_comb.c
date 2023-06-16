#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;
	for (q = 48; q <= 57; q++)
	{
		putchar(q);
		if (q == 9)
		{
			continue;
			putchar(q);
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return 0;
}
