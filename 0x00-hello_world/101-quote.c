#include <stdio>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: main returns string followed by a newline
 *
 * Return: Always 0 on success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);
}
