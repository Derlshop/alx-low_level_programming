#include "main.h"
#include <stdlib.h>

 ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t c, b, d;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	c = open(filename, O_RDONLY);
	b = read(c , buffer, letters);
	d = write(STDOUT_FILENO, buffer, b);

	if (c == -1 || b == -1 || d == -1 || d != b )
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(c);

	return (d);
}
