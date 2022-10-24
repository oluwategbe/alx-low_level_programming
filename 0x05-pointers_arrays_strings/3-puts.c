#include "main.h"
/**
 * _puts - prints a string then a new line
 * @str: input variable
 * Return: nothing
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
