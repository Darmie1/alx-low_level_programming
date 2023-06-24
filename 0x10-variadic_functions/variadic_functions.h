#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
/**
 * Note that stdarg.h is a standard header file in C that provides facilities for working with functions that accept a variable number of arguments. It defines a set of macros and types that allow you to access the individual arguments passed to such functions.
 */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
#endif

