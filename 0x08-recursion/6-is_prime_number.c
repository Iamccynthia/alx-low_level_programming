#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
<<<<<<< HEAD
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
=======
 * Return: If the number is divisible - 0.
 * If the number is not divisible - 1.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
<<<<<<< HEAD
		return (0);

	if (div == num / 2)
		return (1);
=======
	return (0);

	if (div == num / 2)
	return (1);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
<<<<<<< HEAD
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
=======
 * Return: If the integer is not prime - 0.
 * If the number is prime - 1.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
<<<<<<< HEAD
		return (0);

	if (n >= 2 && n <= 3)
		return (1);
=======
	return (0);

	if (n >= 2 && n <= 3)
	return (1);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f

	return (is_divisible(n, div));
}
