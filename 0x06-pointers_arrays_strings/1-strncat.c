#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
<<<<<<< HEAD
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
=======
 *   an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
<<<<<<< HEAD
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
=======
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	return (dest);
}
