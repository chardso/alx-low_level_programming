#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passes to the function
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list print;
unsigned int i;

va_start(print, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(print, int));

if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(print);
}

