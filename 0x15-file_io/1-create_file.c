#include <stdio.h>
#include "main.h"
/**
 * create_file - this is a func that creates a file
 * @text_content: a NULL terminated string to write to the file
 * @filename: the name of the file to be created
 * Return: 0
 */

int create_file(const char *filename, char *text_content)
{
	int fred;
	int leng = 0;
	int wo;


	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}
	fred = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		wo = write(fred, text_content, leng);

	if (fred == -1 || wo == -1)
	{
		return (-1);
	}

	close(fred);

	return (1);
}
