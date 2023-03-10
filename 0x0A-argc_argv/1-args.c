#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers of args
 * @argc: argumentt count
 * @argv: agument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
