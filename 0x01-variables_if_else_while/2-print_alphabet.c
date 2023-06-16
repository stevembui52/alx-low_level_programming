#include <stdio.h>
/**
* main - Entry point
* 
*Return: Always 0 (Success) */
int main(void)
{
	char chara= 'a';

	while (chara <= 'z')
	{
		putchar(chara);
		chara++;
	}

		putchar('\n');
		return (0);
}
