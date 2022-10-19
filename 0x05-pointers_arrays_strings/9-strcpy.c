#include "main.h"

/**
<<<<<<< HEAD
 * *_strcpy -  copies the string pointed to by src
=======
 *_strcpy -  copies the string pointed to by src
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
<<<<<<< HEAD
		i++;
		dest[i] = src[i];
=======
	i++;
	dest[i] = src[i];
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	} while (src[i] != '\0');

	return (dest);
}
