#include <stdio.h>
/**
 * main - entry point 
 * Return: 0 (success)
 */
int main(void)
{
	char low = 'a';
	char high = 'A';
	for (low; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (high; high <= 'Z'; high++)
	{
		putchar(high);
	}
	putchar('\n');
	return (0);
}
