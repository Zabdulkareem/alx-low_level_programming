#include <stdio.h>

/**
 * main - Program entry point
 *
 * Description: Prints all possible combinations of two two-digits.
 *
 * Return: 0 on success.
 */
int main(void)
{
    int c = 0, i = 0, k = 0, j = 0;

    // Four nested while loops for generating combinations
    while (c <= 9)
    {
        i = 0;
        while (i <= 9)
        {
            k = 0;
            while (k <= 9)
            {
                j = 0;
                while (j <= 9)
                {
                    // Ensure combinations are in ascending order and without duplicates
                    if (((k * 10 + j) > (c * 10 + i) && k >= c) || c < k)
                    {
                        // Print the first two-digit number (num1)
                        putchar('0' + c);
                        putchar('0' + i);

                        // Print space separator between the two numbers
                        putchar(' ');

                        // Print the second two-digit number (num2)
                        putchar('0' + k);
                        putchar('0' + j);

                        // Check if this is the last combination
                        if (c == 9 && i == 9 && k == 9 && j == 9)
                        {
                            // If it's the last combination, print a newline
                            putchar('\n');
                        }
                        else
                        {
                            // If not the last combination, print comma and space
                            putchar(',');
                            putchar(' ');
                        }
                    }

                    j++;
                }
                k++;
            }
            i++;
        }
        c++;
    }

    return (0);
}
