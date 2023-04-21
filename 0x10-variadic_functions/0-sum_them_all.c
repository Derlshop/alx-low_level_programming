#include "variadic_functions.h"
#include <stdarg.h>

/**
 * This Programme prints the sum of all arguments
 * Authur Nweke Samue
 * Date: 20 April 2023
 */
int sum_them_all(const unsigned int a ...)
{
	va_list pos;
	unsigned int i,	sum = 0;
	
	va_start(pos, a);

	for (i = 0; i < a; i++)
		sum += va_arg(pos, int);

	va_end(pos);

	return (sum);
}

int main(void)
{
	putchar(sum_them_all(2,6,8,9,13,77,100));
	return 0;
}
