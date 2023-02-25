#include "main.h"
/**
 * print_line -  a function that draws a straight line
 *@n: the number of _ characters to be printed out
 *Return:(\n) if n is 0 or less
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
	for (line = 0; line <= n; line++)
	{
	_putchar('_');
	}
	}
	_putchar('\n');
	return (\n);

}



