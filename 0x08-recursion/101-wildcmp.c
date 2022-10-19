#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - Returns the length of a string,
<<<<<<< HEAD
 *                   ignoring wildcard characters.
 * @str: The string to be measured.
 *
=======
 * ignoring wildcard characters.
 * @str: The string to be measured.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 * Return: The length.
 */
int strlen_no_wilds(char *str)
{
	int len = 0, index = 0;

	if (*(str + index))
	{
<<<<<<< HEAD
		if (*str != '*')
			len++;

		index++;
		len += strlen_no_wilds(str + index);
	}

=======
	if (*str != '*')
	len++;

	index++;
	len += strlen_no_wilds(str + index);
	}
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	return (len);
}

/**
 * iterate_wild - Iterates through a string located at a wildcard
<<<<<<< HEAD
 *                until it points to a non-wildcard character.
=======
 * until it points to a non-wildcard character.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 * @wildstr: The string to be iterated through.
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
<<<<<<< HEAD
		(*wildstr)++;
		iterate_wild(wildstr);
=======
	(*wildstr)++;
	iterate_wild(wildstr);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	}
}

/**
 * postfix_match - Checks if a string str matches the postfix of
<<<<<<< HEAD
 *                 another string potentially containing wildcards.
 * @str: The string to be matched.
 * @postfix: The postfix.
 *
 * Return: If str and postfix are identical - a pointer to the null byte
 *                                            located at the end of postfix.
 *         Otherwise - a pointer to the first unmatched character in postfix.
=======
 * another string potentially containing wildcards.
 * @str: The string to be matched.
 * @postfix: The postfix.
 * Return: If str and postfix are identical - a pointer to the null byt
 * located at the end of postfix.
 * Otherwise - a pointer to the first unmatched character in postfix.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
<<<<<<< HEAD
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

=======
	iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
	postfix++;
	return (postfix_match(str, postfix));
	}
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
	return (postfix);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
<<<<<<< HEAD
 *
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
=======
 * Return: If the strings can be considered identical - 1.
 * Otherwise - 0.
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
<<<<<<< HEAD
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);
=======
	iterate_wild(&s2);
	s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
	return (1);

	if (*s1 != *s2)
	return (0);
>>>>>>> 76b89d345f8c867db89c2867a8671771cec8e66f

	return (wildcmp(++s1, ++s2));
}
