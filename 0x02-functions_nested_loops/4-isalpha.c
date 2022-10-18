#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the input character
 *
 * Return: returns 1 if c is a letter, else returns 0
 */
int _isalpha(int c)
{
	int start;
	int end;
	int ret = 0;

	for(start = 'a'; start <= 'z'; start++)
	{
		for(end = 'A'; end <= 'Z'; end++)
		{
			if (c == start || c == end)
			{
				ret = 1;
				return (ret);
			}
			else
			{
				return (ret);
			}
		}
	}
}
