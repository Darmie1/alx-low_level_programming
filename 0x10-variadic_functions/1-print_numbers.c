#include "variadic_functions.h"

/**
 * print_numbers - this func prints numbers
 * @n: n is the number of interger passed into the func
 * @separator: separatoe is the string to be printed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mylist;
	int nu;
	unsigned int o;

	va_start(mylist, n);

	for (o = 0; o < n; o++)
	{
		nu = va_arg(mylist, int);
		printf("%d", nu);
	if (separator != NULL && o < n - 1)
		printf("%s", separator);
	}
	va_end(mylist);

	printf("\n");
}
