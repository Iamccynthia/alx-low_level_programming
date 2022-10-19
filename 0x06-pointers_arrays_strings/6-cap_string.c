#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
<<<<<<< HEAD
 *
=======
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
<<<<<<< HEAD
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    index == 0)
			str[index] -= 32;

		index++;
	}

	return (str);
=======
		int index = 0;

		while (str[index])
		{
			while (!(str[index] >= 'a' && str[index] <= 'z'))
				index++;

			if (str[index - 1] == ' ' ||
					str[index - 1] == '\t' ||
					str[index - 1] == '\n' ||
					str[index - 1] == ',' ||
					str[index - 1] == ';' ||
					str[index - 1] == '.' ||
					str[index - 1] == '!' ||
					str[index - 1] == '?' ||
					str[index - 1] == '"' ||
					str[index - 1] == '(' ||
					str[index - 1] == ')' ||
					str[index - 1] == '{' ||
					str[index - 1] == '}' ||
					index == 0)
				str[index] -= 32;

			index++;

		}

		return (str);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
}
