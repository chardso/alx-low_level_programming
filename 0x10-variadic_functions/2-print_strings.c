#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between strings
 * @n: number of strings passed to the function
 * Return: two strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list printTwo;
unsigned int i;
char *str;

va_start(printTwo, n);

for (i = 0; i < n; i++)
{
str = va_arg(printTwo, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(printTwo);
}

