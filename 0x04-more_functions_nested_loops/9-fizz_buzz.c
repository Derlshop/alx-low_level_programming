#include <stdio.h>

/**
 *main - prints numbers from one to hundred.
 *Fizz,Buzz or FizzBuzz if the number is a multiple of three and five
 *
 * Return: 0
 */
int main(void)
{
	int a = 1, i = 2;

	printf("%d", a);
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
		i++;
	}
	printf("\n");
	return (0);
}
