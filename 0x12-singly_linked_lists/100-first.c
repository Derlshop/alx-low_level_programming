#include <stdio.h>

/**
 * first - function executed before main
 * AUTHOR: OYETUNDE IGBEKELE
 * Return: no return.
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
