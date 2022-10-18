#include "main.h"
/**
 * main - Check description
 * Description: it prints the word _putchar, followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(word[a]);
	}
	_putchar('\n');

	return (0);
}
