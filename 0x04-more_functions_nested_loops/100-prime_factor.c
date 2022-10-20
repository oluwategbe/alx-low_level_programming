#include <stdio.h>
/**
 * main - prints largest prime factor
 * Return: 0 (success)
 */
int main(void)
{
	long int i, j;

	i = 612852475143;
	for (j = 2; j <= i; j++)
	{
		if (i % j == 0)
		{
			i /= j;
			j--;
		}

	}
	printf("%ld\i", j);
	return (0);
}
