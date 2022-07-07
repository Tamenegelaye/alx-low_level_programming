#include <stdlib.h>
#include <stdio.h>

/**
 *main - print opcodes of a given machine
 *@argc: size of argv
 *@argv: vector of size argc
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int count, bytes;

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

	for (count = 0; count < bytes; count++)
	{
		printf("%02hhx", *((char *)main + count));
		if (count < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
