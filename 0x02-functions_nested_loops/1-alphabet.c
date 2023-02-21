#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char al = 'a';

	while (letter <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
