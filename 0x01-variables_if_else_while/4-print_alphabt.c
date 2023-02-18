#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: (0) if successful
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{

		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
