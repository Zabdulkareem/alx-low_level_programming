#!/bin/bash

 /**
  * main - Entry point
  *
  * Return: Always 0 (success)
  * 
  * Description: main uses the sizeof() gets the size of the data inbytes
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
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(i2));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(i3));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
