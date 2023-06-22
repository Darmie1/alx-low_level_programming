#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - this functiin here prints a name
 * @name: representing name and func pointer
 * @f: calls the func f with the name as an argument to print the name
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
