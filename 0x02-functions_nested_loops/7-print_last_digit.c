#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: input value
 *
 * Return: returns the last digit
 */
int print_last_digit(int a)
{
	int i;

	if (a < 0)
	{
		i = -1 * (a % 10);
	}
	else
	{
		i = a % 10;
	}
	_putchar((i % 10) + '0');
	return (i % 10);
}
