#include "main.h"
/**
 * _isupper - A function that checks for uppercase characters
 * @c: the characters to be checked
 * Return: (1) if character is uppercase (0) otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
