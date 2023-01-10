#include "main.h"
/**
* *_strcpy - copies the string pointed to by src
* including the terminating null byte to the buffer
* pointed to by dest
* @dest: pointer to the destination array where the content is
* to be copied
* @src: the string to be copied
* Return: Always 0
*/
char *_strcpy(char *dest, char *src)
{
int len;

for (len = 0; src[len] != 0; len++)
{
dest[len] = src[len];
}
dest[len] = 0;

return (dest);
}

