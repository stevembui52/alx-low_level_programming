#include <stdio.h>
/**
* main - Entry point
*
*Return: Always 0 (Success) */
int main(void)
{
	int chara = 97;

	for (chara; chara <= 122; chara++)
	{
		putchar(chara);
	}
	putchar('\n');
	return (0);
}
