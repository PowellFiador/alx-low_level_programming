#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all possible combinations of single digits
 * Return: (0) if successful
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}

