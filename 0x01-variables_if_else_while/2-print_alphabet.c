#include <stdio.h>
#include <stdlib.h>

/* A program that prints out all the lowercase alphabets*/
int main(void)
{
    char alph;
	for ( alph = 'a'; alph <= 'z'; alph++)
    {
        putchar(alph);
        putchar('\n');
    }
    
	return (0);
}