#include "main.h"
/**
 * _isupper - check for uppercase letter.
 *@c:value to check
 * Return: ! if uppercase 0 if else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
