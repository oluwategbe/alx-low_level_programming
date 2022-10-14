#include <stdlib.h>

#include <time.h>
#include <stdio.h>
/**
 * main - checks if the random number is +ve,-ve or 0
 * Return: 0 or if there is an error, the error
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
