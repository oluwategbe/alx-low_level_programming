#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: input variable
 * @b: input variable
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
