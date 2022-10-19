#include "main.h"

/**
<<<<<<< HEAD
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 *
 * Return: 0
=======
 * _puts - function that print a string, followed by new line
 * @str: pointer that point the string
 * Return: nothing
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */

void _puts(char *str)
{
<<<<<<< HEAD
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
=======
		int k = 0;

		while (*(str + k))
		{
		_putchar(*(str + k));
		k++;
		}
		_putchar('\n');
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
}
