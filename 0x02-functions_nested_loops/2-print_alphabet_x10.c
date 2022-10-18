#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int start = 'a';
	int loop = 0;

	for (loop; loop < 10; loop++)
	{
		for (start; start <= 'z'; start++)
		{
			_putchar(start);
		}
		putchar('\n');
	}
}
