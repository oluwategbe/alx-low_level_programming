#include "main.h"
/**
 * _strncat - concatenantes two strings
 * @dest: destination
 * @src: source
 * @n: byte used from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
	{
		i++
	}
	while(j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
