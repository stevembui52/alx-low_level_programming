#include <stdio.h>
/**
* main - Entry point
*
*Return: Always 0 (Success) */
int main(void)
{
	int chara = 97;

	while (chara <= 122)
	{
		putchar(chara);
		chara++;
	}
	putchar('\n');
	return (0);
}
