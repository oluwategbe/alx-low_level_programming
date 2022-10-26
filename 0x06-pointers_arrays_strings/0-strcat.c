#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input string
 * @src: input string
 * Return: nothing
 */
char *_strcat(char *dest, char *src){
	int i = 0;
	int j = 0;

	while(*(dest + i) != '\0')
	{
		i++;
	}
	while(j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
