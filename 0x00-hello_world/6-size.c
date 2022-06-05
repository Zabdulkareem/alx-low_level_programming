#include <stdio.h>

 /**
  * main - main prints sizeof() data type
  *
  * Description: The sizeof() function can be used to get the
  * size of a data type in bytes. This allows the system
  * to allocate enough space to the type in memory
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;
	long int li;
	long long int i3;
	char c;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(i3));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
