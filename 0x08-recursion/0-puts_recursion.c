#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
<<<<<<< HEAD
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
=======
		if (*s)
		{
		_putchar(*s);
		_puts_recursion(s + 1);
		}

		else
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
		_putchar('\n');
}
