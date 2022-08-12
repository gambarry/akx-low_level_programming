#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
	f(name);
}
