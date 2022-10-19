#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_array - print `n` elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
=======
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: void
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
<<<<<<< HEAD
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
=======
	printf("%d", a[i]);
	if (n > 0)
	{
	printf(", ");
	}
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	}
	printf("\n");
}
