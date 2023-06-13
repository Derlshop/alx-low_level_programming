#include <stdlib.h>
#include<main.h>
/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	int i = 0, a = 0;
	char *z;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[a] != '\0')
		a++;

	z = malloc((a + 1) * sizeof(char));
	if (z == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		z[i] = str[i];
		i++;
	}

	return (z);
}
