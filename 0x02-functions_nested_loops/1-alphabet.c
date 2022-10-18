#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowecase, then a new line
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int start;

	for (start = 'a'; start <= 'z'; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
