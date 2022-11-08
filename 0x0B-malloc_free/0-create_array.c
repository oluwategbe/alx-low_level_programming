#include "main.h"
#include <stdlib.h>
/**
 * chreate_array - chreates an array of chars
 * @size: size of the array
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *chreate_array(unsigned int size, char c)
{
	char *chr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	chr = malloc(sizeof(c) * size);

	if (chr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		chr[i] = c;

	return (chr);
}
