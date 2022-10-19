#include "main.h"

/**
<<<<<<< HEAD
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: 0
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
=======
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
	len++;

	if (len % 2 == 0)
	n = len / 2;

	else
	n = (len + 1) / 2;

	for (i = n; i < len; i++)
	_putchar(str[i]);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	_putchar('\n');
}
