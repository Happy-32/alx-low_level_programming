#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	_putchar(*s);
	return (0);
}
