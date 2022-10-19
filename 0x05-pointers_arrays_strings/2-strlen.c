#include "main.h"

/**
<<<<<<< HEAD
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: int length of the string
=======
 * _strlen - returns the lenght of string
 * @s: string to find length
 * Return: length of string
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */

int _strlen(char *s)
{
<<<<<<< HEAD
	int length = 0;

	while (s[length])
		length++;
	return (length);
=======
		int m = 0;

		while (*(s + m))
		m++;
	return (m);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
}
