#include <stdio.h>

/**
 * main - print name
 * @argc: counter
 * @argv: array
 *
 * Return: integer
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
