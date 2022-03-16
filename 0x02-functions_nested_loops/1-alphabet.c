#include 'main.h'
/**
 * print alphabet in lowercase
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z');
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n);
}
