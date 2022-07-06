#include "function_pointers.h"

/**
 * print_name - gets ur name printed boldly.
 * @name: accepts your name.
 * @f: a function to a pointer.
 *
 * Return: return nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
