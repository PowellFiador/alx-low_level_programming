#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program that prints lowercase alphabet in reverse
 *Return: (0) if successful
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
