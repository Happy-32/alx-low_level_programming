#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabets in lowercases and uppercases
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alph;
	for ( alph = 'a'; alph <= 'z'; alph++)
    {
        putchar(alph);
    }
    for (alph = 'A'; alph <= 'Z'; alph++)
    {
        putchar(alph);
    }

    putchar('\n');
	return (0);
}