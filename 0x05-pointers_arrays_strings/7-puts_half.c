#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line
* @str: original string, pointer to a char
* Return: Always 0
*/
void puts_half(char *str)
{
int len;

for (len = 0; str[len] != 0; len++)
{
}
len++;
for (len /= 2; str[len] != 0; len++)
{
_putchar(str[len]);
}
_putchar(10);
}
