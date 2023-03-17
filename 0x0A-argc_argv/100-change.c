#include <stdio.h>
#include <stdlib.h>
/**
 * main- function
 * @argc: first param
 * @argv: second param
 * Return: 0
 */
int main(int argc, char *argv[])

{
	int c;
	int co = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	while (c > 0)
	{
		if (c >= 25)
			c = c - 25;
		else if (c >= 10)
			c = c - 10;
		else if (c >= 5)
			c = c - 5;
		else if (c >= 2)
			c = c - 2;
		else if (c >= 1)
			c = c - 1;
		co++;
	}
	printf("%d\n", co);
	return (0);
}
