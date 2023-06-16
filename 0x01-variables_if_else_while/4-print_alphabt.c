#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 97;

	while (num <= 122)
	{
		if (num == 101 || num == 113)
		{
			num++;
			continue;
		}
		putchar(num);
		num++;
	}
	putchar ('\n');
	return (0);
}
