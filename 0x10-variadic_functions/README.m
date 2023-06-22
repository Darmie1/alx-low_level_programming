VARIADIC FUNCTIONS IN C

Variadic functions in C
Variadic functions are functions that can take a variable number of arguments. In C programming, a variadic function adds flexibility to the program. It takes one fixed argument and then any number of arguments can be passed. The variadic function consists of at least one fixed variable and then an ellipsis(…) as the last
		int function_name(data_type variable_name, ...);
			Values of the passed arguments can be accessed through the header file named as:

#include <stdarg.h>
