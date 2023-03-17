#include <stdio.h>
/**
 * main - function
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int u;

	for (u = 0; u < argc; u++)
		printf("%s\n", argv[u]);
	return (0);
}
