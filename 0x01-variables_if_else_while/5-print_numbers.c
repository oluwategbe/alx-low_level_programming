#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int start;	
	int num = 0;

	for(start = '0'; start <= '9'; start++)
	{
		putchar(start);
	}
	/**for(num; num < 10; num++)
	*{
	*	printf("%d", num);
	}
	*/
	putchar('\n');
	return (0);
}
