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
	char sen[] = "and that piece of art is useful\" -Dora Korpar, 2015-10-19";
	size_t sentence_len = sizeof(sen) - 1;

	write(1, sen, sentence_len);

	return (1);
}
