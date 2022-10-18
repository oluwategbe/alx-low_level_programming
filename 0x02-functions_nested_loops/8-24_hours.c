#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: every min of the day
 */
void jack_bauer(void)
{
	int Hour, Min;

	for (Hour = 0; Hour < 24; Hour++)
	{
		for (Min = 0; Min < 60; Min++)
		{
			_putchar((Hour / 10) + '0');
			_putchar((Hour / 10) + '0');
			_putchar(':');
			_putchar((Min / 10) + '0');
			_putchar((Min % 10) + '0');
			_putchar('\n');
		}
	}
}
