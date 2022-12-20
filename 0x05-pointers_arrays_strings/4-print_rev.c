#include "main.h"
/**
* print_rev - reverse a string
* @s: pointer to a char
* Return: Always 0
*/
void print_rev(char *s)
{
int i = 0;
int len;

for (len = 0; s[len] != 0; len++)
{
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar(10);
}

