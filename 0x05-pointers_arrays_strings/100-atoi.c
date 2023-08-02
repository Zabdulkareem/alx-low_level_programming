#include "main.h"

/**
 * _atoi - function converts a number string to an integer even
 * if it was preceded by characters
 * @s: string input parameter
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int i = 0;	/* index of first digit */
	int sign = 1; /* This initializes the sign of i as positive */
	int result = 0;	/* Initialize result */
	int validDigitFound = 0;	/* Flag to indicate valid digit */

	/* Checks the character for sign */
	if (s[0] == '-')
	{
		sign = -1;	/* Changes sign to -1 if -ve sign is found */
		i++;	/* Move to next sign */
	}

	for (; s[i] != '\0'; ++i)
	{
		/* Check if the character is a digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
			validDigitFound = 1;	/* Sets a flag for valid digit encountered */
			result = result * 10 + (s[i] - '0');
		}
		else if (validDigitFound)
		{
			break;	/* If a non-digit char is encountered, break out of loop */
		}
	}

	return (sign * result);
}
