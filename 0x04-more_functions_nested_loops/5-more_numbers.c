#include "main.h"
/**
* more_numbers - Prints 10 times the numbers from 0 to 14
* Return: numbers from 0 to 14
*/
void more_numbers(void)
{
char times, n;

for (times = 0; times < 10; times++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
_putchar(n / 10 + 48);
_putchar(n % 10 + 48);
}

_putchar(10);
}

}

