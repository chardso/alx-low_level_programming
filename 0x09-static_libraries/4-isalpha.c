#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Checks for alphabetic character
 * @c: is a letter
 *
 * Return: 1 if c is a letter lower or uppercase. Otherwise return 0
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}

