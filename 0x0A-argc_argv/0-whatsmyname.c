#include <stdio.h>

/**
 * main - Function that returns
 * the name of the program passed into teh command line
 * @argc: Argument count
 * @argv: Argument Vector
 * Return: the name of the program
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	printf("\"%s\".\n", argv[0]);

	return (0);
}
