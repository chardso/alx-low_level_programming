#include "main.h"
/**
* print_line - Draws a straight line in the terminal
* @n: number of time the character _ should be printed
* Return: a straight line
*/
void print_line(int n)
{
char i;

for (i = 1; i <= n; i++)
{
_putchar('_');
if (n < 0 && n == 0)
{
_putchar(10);
}
}

_putchar(10);
}

