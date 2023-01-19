#include "function_pointers.h"

/**
 * print_name - print a name using the function supplied by the caller
 * @name: the name to print
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
