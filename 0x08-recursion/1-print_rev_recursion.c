#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
<<<<<<< HEAD
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
=======
		if (*s)
		{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		}
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
}
