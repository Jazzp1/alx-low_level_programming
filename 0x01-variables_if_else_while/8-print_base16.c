#include <stdio.h>

/**
 * main-program entry point.
 * Return: 0 
 */
int main(void)
{
	int i;
	char hexvalues[] = "01234";

	for (i = 0; i <= 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
