#include <stdio.h>

/**
 * main - main
 * before_main - this function prints input before main
 * Return: nothing
 */

void before_main(void);

int main(void)
{
	before_main();

	return (0);
}
/**
 * before_main - this function prints input beforethe main func
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
