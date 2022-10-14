#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int start;

	for (start = '0'; start <= '9'; start++)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
