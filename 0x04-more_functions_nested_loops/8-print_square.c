#include "main.h"
/**
* print_square - Prints a square followed by a new line
* @size: is the size of the square
* Return: A square #
*/
void print_square(int size)
{
int times, square;

if (size <= 0)
{
_putchar(10);
}
else
{
for (times = 0; times < size; times++)
{
for (square = 0; square < size; square++)
{
_putchar(35);
}
_putchar(10);
}
}
}

