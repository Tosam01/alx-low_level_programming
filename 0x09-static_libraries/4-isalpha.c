#include "main.h"

/**
 * _isalpha - shows alphabetic character
 * @c: character
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c) /** _isalpha - character */
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
