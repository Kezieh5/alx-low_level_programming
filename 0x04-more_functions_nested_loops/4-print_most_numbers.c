#include "main.h"

/**
 * prints_most_numbers - function that prints the numbers from 0-9
 * Description: prints the numbers except 2 and 4
 * Return: 0-9 except 2 and 4
 */

void print_most_numbers(void)

{
int i = 0;

for (; i <= 9; i++)
{
if ((i == 2) || (i == 4))
{
continue;
}

else
{
_putchar(i + '0');
}
}
_putchar('\n');
}
