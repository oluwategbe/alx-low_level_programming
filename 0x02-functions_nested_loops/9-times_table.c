#include "main.h"
/**
 * times_table - prints the 9 times table starting from 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int row, column, mul;

	for (row = 0; row <= 9; row++)
	{
		_putchar(0);
		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');
			mul = row * column;
			if (mul <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((mul / 10) + '0');
			}
			_putchar((mul % 10) + '0');
		}
		_putchar('\n');
	}
}
