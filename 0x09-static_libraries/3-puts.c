#include "main.h"
#include <stdio.h>

/**
* _puts - prints a string follwed by a new line, to stdout
* @str: checked
* Return: nothing
*/

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
