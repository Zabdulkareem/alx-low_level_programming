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
	const char sentence[] = "and that piece of art is useful\" -Dora Korpar\
		, 2015-10-19\n";
	size_t sentence_len = sizeof(sentence) - 1;

	write(1, sentence, sentence_len);

	return (1);
}
