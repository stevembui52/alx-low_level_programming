#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (b = 48; b <= 56; b++)
	{
		for (a = 49; a <= 57; a++)
		{
			if  (a > b)
			{
				putchar(b);
				putchar(a);
				if (b != 56 || a != 57)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
