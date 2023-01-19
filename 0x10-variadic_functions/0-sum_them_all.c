#include "variadic_functions.h"
/**
 * sum_them_all - sums up the args passed into it
 * @n:  n is the count of arguments to be passed
 * Return: sum of the arguements.
*/
int sum_them_all(const unsigned int n,  ...)
{

int sum;
unsigned int i;

int sum;
unsigned int i;

va_list(args_p);

va_start(args_p, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(args_p, int);
}
va_end(args_p);

return (sum);
}

