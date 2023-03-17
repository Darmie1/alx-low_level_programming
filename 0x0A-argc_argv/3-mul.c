#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: first parameter
 * @argv: second parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int one, two, result;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	else
	{
		one = atoi(argv[1]);
		two = atoi(argv[2]);
		result = one * two;
		printf("%d\n", result);
	}
	return (0);
}
