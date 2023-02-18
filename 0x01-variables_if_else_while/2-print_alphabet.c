#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: (0) if successful
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
