#include "main.h"
/**
 *  _strstr - finds the first occurrence of the substring
 *  needle in the string haystack
 *  @haystack: string
 *  @needle: substring
 *  Return: pointer to the beginning of located substring or
 *  NULL if the substring isn't found
 */
char *_strstr(char *haystack, char *needle)
{
	char *myHaystack;
	char *myNeedle;

	while (*haystack != '\0')
	{
		myHaystack = haystack;
		myNeedle = needle;

		while (*haystack != '\0' && *myNeedle != '\0' && *haystack == *myNeedle)
		{
			haystack++;
			myNeedle++;
		}
		if (!*myNeedle)
			return (myHaystack);
		haystack = myHaystack + 1;
	}
	return (0);
}
