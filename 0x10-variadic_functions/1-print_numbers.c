#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * File-Programme print numbers followed by new line
 *@n- number of strings to be printed
 *@separator- strings to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pos;
	unsigned int j;

	va_start(pos; n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(pos, int));

		if (j != (n - 1) && separator != NULL)
			printf("%s",separator);
	}

	printf("\n");

	va_end(pos);
}






