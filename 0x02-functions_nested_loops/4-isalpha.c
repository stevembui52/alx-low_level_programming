#include "main.h"
/**
 * int _isalpha - check alphabet 
 *
 *@c:the character in ASCII code
 *
 * Return: 1 if alpha 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >=97 && c >= 122 || c >= 65 && c  <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
