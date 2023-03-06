#include "main.h"

/**
 * *_memcpy - copies @n bytes from memory
 * area @src to memory area @dest
 * @src: the source
 * @dest: the destiation
 * @n: number of bytes
 * Return:pointer to the resulting string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	_putchar(*dest);
	return (0);
}
