#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: number arguments to program
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
