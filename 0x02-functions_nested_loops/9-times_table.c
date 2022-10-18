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
		_putchar(48);
		for (column = 1; column <= 9; column++)
		{	
			mul = row * column;
			_putchar(44);
			_putchar(32);
			if (mul <= 9)
			{
				_putchar(32);
				_putchar(mul + 48);
			}
			else
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
