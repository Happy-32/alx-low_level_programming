#include "main.h"

/**
 * *_memset - fills the first @n bytes of the memory
 * area pointed to by @s with the constant byte @b
 * @b: the source
 * @s: the destiation
 * @n: Number of bytes of memory
 * Return:pointer to the resulting string
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	_putchar(*s);
	return (0);
}
