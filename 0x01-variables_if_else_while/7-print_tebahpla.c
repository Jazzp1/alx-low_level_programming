#include <stdio.h>
/**
 * main-program entry point.
 * Return: 0 if no error, none zero if error.
 */
int mai(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return(0);
}
