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
	unsigned int i = 0;	/* index of first digit */
	int sign = 1; /* This initializes the sign of i as positive */
	int result = 0;	/* Initialize result */

	for (; *s != '\0'; s++)
	{
		/* Check the character string for its sign */
		if (*s == '-')
		{
			sign *= -1;	/* Changes sign to -1 if -ve sign is found */
		}
		/* Check if the character is a digit */
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (i > 0)
		{
			break;	/* If a non-digit char is encountered, break out of loop */
		}
	}

	return (result * sign);
}
