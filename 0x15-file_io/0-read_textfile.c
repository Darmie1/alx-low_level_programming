#include <stdio.h>
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
	char arrolet[letters + 1];
	ssize_t byre = fread(arrolet, sizeof(char), letters, file);
	ssize_t byw = fwrite(arrolet, sizeof(char), byre, stdout);

	if (filename == NULL)
	{
		return (0);
	}
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	if (byre <= 0)
	{
		fclose(file);
		return (0);
	}
	arrolet[byre] = '\0';
	if (byw != byre)
	{
		fclose(file);
		return (0);
	}
	fclose(file);
	return (byw);
}
