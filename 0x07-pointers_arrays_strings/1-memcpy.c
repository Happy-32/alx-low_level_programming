#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest,src,n);
	putchar(*dest);
	return (0);
}
