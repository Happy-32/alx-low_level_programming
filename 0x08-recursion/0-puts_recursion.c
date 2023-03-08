#include "main.h"
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(*(s + 1));
		_putchar(*(s + 2));
		_putchar(*(s + 3));
		_putchar(*(s + 4));
		_putchar(*(s + 5));
		_putchar(*(s + 6));
		_putchar(*(s + 7));
		_putchar(*(s + 8));
		_putchar(*(s + 9));
		_putchar(*(s + 10));
		_putchar(*(s + 11));
		_putchar(*(s + 12));
		_putchar(*(s + 13));
		_putchar(*(s + 14));
		_putchar(*(s + 15));
		_putchar(*(s + 16));
		_putchar(*(s + 17));
		_putchar(*(s + 18));
		_putchar(*(s + 19));
		_putchar(*(s + 20));
		_putchar('\n');
	}
}
