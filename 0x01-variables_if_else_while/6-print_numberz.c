#include <stdio.h>
/**
 * main - A program that prints all single digits
 * Return: (0) if successful
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
