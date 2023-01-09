#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
int i = 0;

/*While string is not NULL*/
while (s[i] != 0)
{
/*Increment i, to iterate over the characters*/
i++;
/*if s is equal to c*/
if (s[i] == c)
{
/*return the string and the desired character*/
return (s + i);
}
}
return (0);
}

