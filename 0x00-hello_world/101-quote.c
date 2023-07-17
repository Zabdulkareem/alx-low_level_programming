#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: main prints to the stdout without using any functions in Name
 * section of 'printf' or 'puts'
 *
 * Return: 1
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t sentence_len = sizeof(s);

	write(2, s, sentence_len);

	return (1);
}
