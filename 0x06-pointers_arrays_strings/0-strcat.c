#include "main.h"

/**
<<<<<<< HEAD
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
=======
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 * Return: returns pointer to @dest
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */

char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
=======

>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
