#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 *
 *@name: name to print
 *@f: function passed as argument
 *
 * Return: nothing(void)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
