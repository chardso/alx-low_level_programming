#include "main.h"
/**
* print_array - Prints n elements of an array of integers
* @a: pointer to an int
* @n: number of elements of the array to be printed
* Return: Always 0
*/
void print_array(int *a, int n)
{
int len;

for (len = 0; len < n; len++)
{
if (len ==  0)
{
printf("%d", a[len]);
}
else
{
printf(", %d", a[len]);
}
}
printf("\n");
}

