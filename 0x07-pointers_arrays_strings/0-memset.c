#include "main.h"

/**
<<<<<<< HEAD
 * *_memset - fills memory with a constant byte.
=======
 * _memset - fills memory with a constant byte.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
<<<<<<< HEAD
		s[i] = b;
	}

=======
	s[i] = b;
	}
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	return (s);
}
