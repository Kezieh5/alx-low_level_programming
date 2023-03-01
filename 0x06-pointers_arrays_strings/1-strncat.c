#include "main.h"
/**
 * _strncat - concanates two strings at most
 * 
 * an inputed number of bytes from src
 * 
 * @dest: the string to be appended upon
 * 
 * @src: the string to be appended to dest
 * 
 * @n: the number of bytes fro src to be appended on dest
 *
 * * Return: a pointer to the string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
