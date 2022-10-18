#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int start;
	int loop;

	for (loop = 0; loop < 10; loop++)
	{
		for (start = 'a'; start <= 'z'; start++)
		{
			_putchar(start);
		}
		_putchar('\n');
	}
}
