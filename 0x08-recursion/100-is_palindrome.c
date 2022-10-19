#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
<<<<<<< HEAD
 *
=======
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
<<<<<<< HEAD
		len++;
		len += find_strlen(s + len);
=======
	len++;
	len += find_strlen(s + len);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
<<<<<<< HEAD
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
=======
 * Return: If the string is a palindrome - 1.
 * If the string is not a palindrome - 0.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
<<<<<<< HEAD
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

=======
	return (1);

	if (s[index] == s[len - index - 1])
	return (check_palindrome(s, len, index + 1));
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
<<<<<<< HEAD
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
=======
 * Return: If the string is a palindrome - 1.
 * If the string is not a palindrome - 0.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
<<<<<<< HEAD
		return (1);

	return (check_palindrome(s, len, index));
}

=======
	return (1);
	return (check_palindrome(s, len, index));
}
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
