#include "main.h"

/**
<<<<<<< HEAD
 * puts2 - prints xters of a string
 * @str: the used string reference
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
=======
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
		int l = 0;

		while (*s != '\0')
		{
		l++;
		s++;
		}

		return (l);
}

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
		int b;

		for (b = 0; str[b] != '\0' && b < _strlen(str); b += 2)
		_putchar(str[b]);

		_putchar('\n');
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
}
