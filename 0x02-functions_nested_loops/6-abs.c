#include "main.h"
/**
 * _abs -  absolute value of an integer.
 *
 * @i:integer absolute
 *
 * Return: Always 0 (Success)
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
