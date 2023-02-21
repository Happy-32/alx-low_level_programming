#include "main.h"
/**
 * main - Entry point
 * Description: prints a string _putchar
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char al = 'a';
	
	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}
	_putchar('\n');
}
