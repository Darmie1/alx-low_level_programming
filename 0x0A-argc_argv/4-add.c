#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: first parameter
 * @argv: second para
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (a = 1; a < argc; a++)
		{
			if (!atoi(argv[a]))
		{
			printf("Error\n");
		return (1);
		}
		else
		sum = sum + atoi(argv[a]);
		}
	printf("%d\n", sum);
	}
	return (0);
}
