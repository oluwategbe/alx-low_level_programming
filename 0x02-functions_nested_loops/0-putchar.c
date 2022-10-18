#include "main.h"
/**
 * main - Check description
 * Description: prints the word '_putchar' then a new line
 * Return: 0 (success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int a;

	a = 0;
	do {
		_putchar(word[a]);
		a++;
	}
	while (a < 8);
	_putchar('\n');

	return (0);
}
