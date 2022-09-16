#include "main.h"

/**
 * print_numbers - prints numbers fromm 0 and 9 (no standard functions)
 *
 *
 * Return: void
 */
void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
