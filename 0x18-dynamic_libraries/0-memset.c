#include <stdio.h>
#include "main.h"

/**
 * _memset - memset func
 * @s: first arg
 * @b: second arg
 * @n: last arg
 *
 * Return: something
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; n--)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
