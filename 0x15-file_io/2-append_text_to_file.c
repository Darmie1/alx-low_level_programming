#include "main.h"

/**
 * append_text_to_file - this funxtion appends text to a file
 * @filename: name of the file
 * @text_content: the null terminayed string
 * Return: 1   success
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wri;
	int u;
	int lengt;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (lengt = 0; text_content[lengt];)
			lengt++;
	}
	wri = open(filename, O_WRONLY | O_APPEND);
	u = write(wri, text_content, lengt);



	if (wri == -1 || u == -1)

	{
		return (-1);
	}
	close(wri);

	return (1);
}
