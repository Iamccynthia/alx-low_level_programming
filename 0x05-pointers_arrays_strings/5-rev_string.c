#include "main.h"

/**
<<<<<<< HEAD
 * rev_string - prints a string in reverse
 * @s: the used string to beb reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int len, i, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	;
	i = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
=======
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
		int l = 0;

		while (*s != '\0')
		{
		l++;
		s++;
		}

		return (l);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char rdc;

	while (i < j)
	{
	rdc = s[i];
	s[i] = s[j];
	s[j] = rdc;
	i++, j--;
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	}
}
