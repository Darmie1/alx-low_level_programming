#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - this func reads a text file and prints it
 *  to the POSIX standard output.
 *  @filename: name of file
 *  @letters: num of letters to be read and printed
 *  Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t rrd;
	ssize_t wri;
	ssize_t max;

	rrd = open(filename, O_RDONLY);

	if (rrd == -1)
	{
		return (0);
	}
	b = malloc(sizeof(char) * letters);
	max = read(rrd, b, letters);

	wri = write(STDOUT_FILENO, b, max);

	free(b);
	close(rrd);

	return (wri);
}



