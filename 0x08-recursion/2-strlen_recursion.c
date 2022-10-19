#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
<<<<<<< HEAD
 *
=======
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
<<<<<<< HEAD
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
=======
		int len = 0;

		if (*s)
		{
		len++;
		len += _strlen_recursion(s + 1);
		}

		return (len);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
}
