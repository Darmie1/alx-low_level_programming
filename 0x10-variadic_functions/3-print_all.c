#include "variadic_functions.h"
/**
 * print_all - this function prints anything
 * @format: format is a list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list wlist;
	const char *ptr = format;
	char *strg;


	va_start(wlist, format);
	while (ptr && *ptr)
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(wlist, int));
				break;
			case 'i':
				printf("%d", va_arg(wlist, int));
				break;
			case 'f':
				printf("%f", va_arg(wlist, double));
				break;
			case 's':
				strg = va_arg(wlist, char *);
				printf("%s", strg);
				if (strg == NULL)
					printf("(nil)");
				break;
			default:
				break;
		}
		ptr++;
		if (*ptr)
			printf(", ");
	}
	printf("\n");
	va_end(wlist);
}
