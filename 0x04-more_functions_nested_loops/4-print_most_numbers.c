#include "main.h"
/**
* print_most_numbers - prints out all numbers from 0 -> 9 a part from 2 and 4
* Return: All numbers a part from 2 and 4
* does not print 2 and 4
*/

void print_most_numbers(void)
{
int a;

for (a = 48; a <= 57; a++)
{
if (a != 50 && a != 52)
{
_putchar(a);
}
}

_putchar(10);
}

