#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: input character
 *
 * Return: returns +, - or 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar_('0');
		return (0);
	}
	else
	{
		_putchar('1');
		return (1);
	}
}
