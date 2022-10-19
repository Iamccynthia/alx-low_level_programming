#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
<<<<<<< HEAD
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
=======
 * Return: If the number has a natural square root - the square root.
 * If the number does not have a natural square root - -1.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
<<<<<<< HEAD
		return (root);

	if (root == num / 2)
		return (-1);
=======
	return (root);

	if (root == num / 2)
	return (-1);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
<<<<<<< HEAD
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
=======
 * Return: If n has a natural square root - the natural square root of n.
 * If n does not have a natural square root - -1.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
<<<<<<< HEAD
		return (-1);

	if (n == 1)
		return (1);
=======
	return (-1);

	if (n == 1)
	return (1);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f

	return (find_sqrt(n, root));
}
