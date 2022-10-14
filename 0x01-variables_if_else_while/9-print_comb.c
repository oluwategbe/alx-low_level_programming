#include <stdio.h>
/**
 * main - entry point
 * return: 0 (success)
 */
int main(void)
{
	int start = '0';

	for (start; start <= '9'; start++)
	{
		putchar(start);
		if (start != '9')
		{
			putchar(',');
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
