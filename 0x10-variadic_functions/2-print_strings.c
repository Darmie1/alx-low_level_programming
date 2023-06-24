#include "variadic_functions.h"

/**
 * print_strings - this func prints strings
 * @separator: this parameter is the string between strings
 * @n: n is the number of strings passed to the func
 * Retur: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mlist;
	unsigned int g;
	char *string;

	va_start(mlist, n);
	for (g = 0; g < n; g++)
	{
		string = va_arg(mlist, char *);
		if (string != NULL)
			printf("%s", string);
		else
			printf("(nil)");
		if (separator != NULL && g < n - 1)
			printf("%s", separator);
	}
	va_end(mlist);
	printf("\n");
}
