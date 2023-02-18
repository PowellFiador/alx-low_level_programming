#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints al numbers of base 16
 * Return: (0) if successful
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(ch);
	return (0);
}
