#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be raised.
 * @y: The power.
<<<<<<< HEAD
 *
=======
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
<<<<<<< HEAD
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

=======
	return (-1);

	else if (y == 0)
	return (1);
	result *= _pow_recursion(x, y - 1);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	return (result);
}
