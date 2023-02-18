#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program that prints all single numbers
 * Return: (0) if successful
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
