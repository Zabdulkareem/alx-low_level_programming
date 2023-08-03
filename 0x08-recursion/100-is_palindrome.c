#include "main.h"

int str_len(char *s);
int is_palindrome_helper(char *s, int start, int end);

/**
 * str_len - This function finds the length of a string recursively
 * @s: string input whose length is to be found
 *
 * Return: length of string
 */
int str_len(char *s)
{
	/* Base case: If the current char is the '\0', return 0 */
	if (*s == '\0')
		return (0);

	/* Recursive case: Add 1 to the length and call the function */
	/* with the next character */
	return (1 + str_len(s + 1));
}

/**
 * is_palindrome_helper - This checks if a given string is a palindrome
 * @s: string input
 * @start: first index of the string
 * @end: last index of the string
 *
 * Return: 1 if string char is palindrome, otherwise
 * 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	/* Base case: If start and end indices cross, it's a palindrome */
	if (start >= end)
		return (1);

	/* If chars start & end indices are diff, the str is not palindrome */
	if (s[start] != s[end])
		return (0);

	/* Recursive case: Checks the next pair of chars */
	return (is_palindrome_helper(s, (start + 1), (end - 1)));
}

/**
 * is_palindrome - Checks if string is a palindrome
 * @s: string input parameter
 *
 * Return: 1 if char str is a palindrome otherwise
 * 0.
 */
int is_palindrome(char *s)
{
	int len;

	/* Case of empty string */
	if (*s == '\0')
		return (1);

	len = str_len(s);

	/* Call helper function to check if the string is palindrome */
	return (is_palindrome_helper(s, 0, len - 1));
}
