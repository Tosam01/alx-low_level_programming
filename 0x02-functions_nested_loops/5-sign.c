#include "main.h"


/**
 * print_sign - if input is less, greater oe equal to zero
 * @n: number is an integer
 * Return: 1 greater than zero, zero is zero. -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
