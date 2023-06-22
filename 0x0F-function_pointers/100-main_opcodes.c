#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function prints its own op codes
 * @argc: the number of arguments presrnt
 * @argv: array of arguent present
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int moy;
	int i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	moy = atoi(argv[1]);
	if (moy < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < moy; i++)
	{
		if (i == moy - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
