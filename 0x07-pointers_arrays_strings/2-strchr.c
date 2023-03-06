#include "main.h"

char *_strchr(char *s, char c)
{
	char *ptr;
	ptr = strchr(s, c);
	putchar(*ptr);
	return (0);
}
