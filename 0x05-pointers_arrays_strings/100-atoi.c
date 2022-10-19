#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
<<<<<<< HEAD
 *
=======
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 * Return: The integer value of the comverted string.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
<<<<<<< HEAD
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
=======
	if (*s == '-')
	sign *= -1;

	else if (*s >= '0' && *s <= '9')
	num = (num * 10) + (*s - '0');

	else if (num > 0)
	break;
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	} while (*s++);

	return (num * sign);
}
