#include "main.h"
/**
 * _isdigit - check for digits
 *@c:the parameter to check
 * Return: 1 if it is digit otherwise  0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
