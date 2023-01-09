#include "main.h"
/**
 * *_strpbrk - searches a string ofr any of a set of bytes
 * @s: string to be checked
 * @accept: locates of any bytes in the string accept
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
int len1, len2;

/*Check the length of the *s string until not NULL*/
for (len1 = 0; s[len1] != 0; len1++)
{
/**
* Check the every character of the accept string
* until not NULL, to allow us to match the characters
* with the *s string
*/
for (len2 = 0; accept[len2] != 0; len2++)
{
/*Check if the bytes are equal in the string *s*/
if (accept[len2] == s[len1])
{
return (s + len1);
}
}
}
return (0);
}

