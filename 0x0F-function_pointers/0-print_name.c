#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: a name
 * @f: function pointer with and string input and returns nothing
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
