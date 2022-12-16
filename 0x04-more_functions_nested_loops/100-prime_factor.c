#include <stdio.h>
#include "main.h"
/**
* main - prints the largest prime factor of 4377510
* maker chardso / hardware engineer
* Return: always 0
**/

int main(void)
{
unsigned long int i, n = 437751089950;

for (i = 3; i < 782849; i = i + 2)
{
while ((n % i == 0) && (n != i))
n = n / i;
}
printf("%lu\n", n);
return (0);
}

