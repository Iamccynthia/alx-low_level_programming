#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
<<<<<<< HEAD
 *
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 to indicate an error.
=======
 * Return: If n > 0 - the factorial of n.
 * If n < 0 - 1 to indicate an error.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
<<<<<<< HEAD
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

=======
	return (-1);

	else if (n >= 0 && n <= 1)
	return (1);

	result *= factorial(n - 1);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	return (result);
}
