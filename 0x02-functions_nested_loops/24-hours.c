#include <stdio.h>

/**
 * Jack_bauer - function print every hour and minutes
 * Return: 0 succesfull
 */
void main(void)
{
	int hour, minute;
	for (hour = 0; hour <+ 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			putchar('0' + (hour / 10));
			putchar('0' + (hour % 10));
			putchar(':');
			putchar('0' + (minute / 10));
			putchar('0' + (minute % 10));
			putchar('\n');
		}
	}
}

