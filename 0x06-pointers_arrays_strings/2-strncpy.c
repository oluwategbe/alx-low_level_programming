#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy from src
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (ssrc[i] != '\0')
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
