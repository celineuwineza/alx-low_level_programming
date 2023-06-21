#include <stdio.h>
#include <stdlib.h>

/**
 * main - pritnts the opcodes of itself.
 * @argc: the number of arguments supplied to the program.
 * @argv: an array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, int argv)
{
	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytes; index++)
	{
		opcodes = *(unsigned char *)address;
		printf("%.2x", opcodes);
	
		if (index == bytes - 1)
			continue;
		printf(" ");
	
		address++;
	}

	printf("\n");

	return (0);
}
