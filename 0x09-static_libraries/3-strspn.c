#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a string
 * @accept: bytes
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
int counter = 0;

/*first we check the length of the string *s until *s not  null*/
for (i = 0; s[i] != 0; i++)
{
/*we go through every character of accept[j] string until not null*/
for (j = 0; accept[j] != 0; j++)
{
/*we check if *accept equal to *s*/
/*if yes, we found a match*/
if (accept[j] == s[i])
{
/*counter + 1 everytime we found a match*/
counter++;
break; /*break if we find a match*/
}
}
/* if *accept is null, break the loop*/
if (accept[j] == 0)
{
break;
}
}
/*return the total of matches*/
return (counter);
}

