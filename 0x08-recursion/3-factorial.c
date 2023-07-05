#include "main.h"
/**
 * factorial - returns the factorial of a given number
 *@n:number to check
 *Return:-1 if number is less 0 and factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}


