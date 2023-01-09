#include "main.h"
/**
 * _strncat - concatenates two strings, except that it will use at most
 * n bytes from src and src doesnot need to be null terminated if it
 * contains n or more bytes
 * @src: origin string
 * @dest: destination string
 * @n: no. of bytes
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
int len1, i;

for (len1 = 0; dest[len1] != 0; len1++)
{
}
for (i = 0; i < n && src[i] != 0;  i++)
{
dest[len1] = src[i];
len1++;
}
dest[len1] = 0;

return (dest);
}

