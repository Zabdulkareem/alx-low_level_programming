#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: This function prints the minutes of the day in this format
 * 00:23
 * Return: Nothing is returned
 */
void jack_bauer(void)
{
	int hour, minute;


	for (hour = 0; hour < 24; ++hour)
	{
		for (minute = 0; minute < 60; ++minute)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
