#include "variadic_functions.h"
#include <stdarg.h>

/**
 *File- This Programme prints the sum of all arguments
 * return sum

 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pos;
	unsigned int i,	sum = 0;
	
	va_start(pos, n);

	for (i = 0; i < n; i++)
		sum += va_arg(pos, int);

	va_end(pos);

	return (sum);
}






