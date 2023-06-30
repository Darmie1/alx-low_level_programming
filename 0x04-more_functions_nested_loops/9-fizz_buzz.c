#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100
 * but follows fizzbuzz rules
 * Return: nothing
 */

int main(void)
{
	int fb;

	for (fb = 1; fb <= 100; fb++)
	{
		if (fb % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (fb % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (fb % 3 == 0 && fb % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", fb);
		}
	}
	printf("\n");

	return (0);
}
