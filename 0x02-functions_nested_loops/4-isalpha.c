#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic characters
 * @c: input
 * Return: (1) if c is an alphabet, lowercase or uppercase otherwise (0)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
