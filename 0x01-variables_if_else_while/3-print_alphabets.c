#include <stdio.h>

/**
 *
 * main-program entry point.
 * REturn: 0 no error, non zero if there is error.
 */

int main(void)
{
	char i;
	char j;

	for (i = 'a'; i = 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
