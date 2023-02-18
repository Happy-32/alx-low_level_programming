#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: This program prints the alphabets in lowercases
 * Return: Always 0 (Success)
 */
int main(void)
{
    char alph;
	for ( alph = 'a'; alph <= 'z'; alph++)
    {
        putchar(alph);

    }

    putchar('\n');
	return (0);
}