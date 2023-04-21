#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * Tjis programme print all the number assigne to it
 * Authur Nweke Samuel
 * Datr 21 April 2023
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	char *str;
	unsigned int i;

	va_start(str_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(str_list, char *);

		if (str == NULL)
			printf("(null)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str_list);
}
