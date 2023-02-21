#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowercase 10 times followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
