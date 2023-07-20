#include "variadic_functions.h"
/**
 *sum_them_all - returns the sum of all its parameters.
 *@n:number of parameters
 *Return:sum of all parameters supplied
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, s = 0, x;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		s += x;
	}
	va_end(args);
	return (s);
}


