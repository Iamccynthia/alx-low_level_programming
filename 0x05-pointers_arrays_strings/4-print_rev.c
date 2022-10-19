#include "main.h"

/**
<<<<<<< HEAD
 * print_rev - prints a string in reverse
 * @s: the used string reference pointer
 * Return: 0
=======
 * print_rev - print string in reverse
 * @s: string to print
 * Return: nothing
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */

void print_rev(char *s)
{
<<<<<<< HEAD
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
=======
		int b = 0;

		while (*(s + b))
		{
		b++;
		}
		b -= 1;
		while (b >= 0)
		{
		_putchar(*(s + b));
		b--;
		}
		_putchar('\n');
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
}
