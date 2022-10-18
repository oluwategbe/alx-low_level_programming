#include "main.h"
/**
 *  _islower - function that checks for a lowercase character.
 *  @c: An input character
 *  Return: 1 if c is lowercase, 0 if it is not
 */
int _islower(int c)
{
	char i;
	int num = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			num = 1;
		}
	}
	return (num);
}
