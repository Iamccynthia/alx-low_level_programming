#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
<<<<<<< HEAD
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
=======
 * of a string to uppercase.
 * @str: The string to be changed.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
<<<<<<< HEAD
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
=======
					{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;

	index++;
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	}

	return (str);
}
<<<<<<< HEAD

=======
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
