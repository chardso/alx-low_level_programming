#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
int len1, len2;

/*If the substring is equal to NULL, return string haystack*/
if (needle[0] ==  0)
return (haystack);
/**
* Check char by char until not NULL for the haystack string
* Check char by char until not NULL for the needle substring
*/
for (len1 = 0; haystack[len1] != 0; len1++)
{
for (len2 = 0; needle[len2] != 0; len2++)
{
/**
* if haystack length + the length of
* the needle substring is not
* equal to the length of the substring
* needle, break the loop
*/
if (haystack[len1 + len2] != needle[len2])
{
break;
}
/**
* the length of the substring + 1 is going
* to count the 4 characters of the word "world"
* until is not NULL and it wil return
* the string haystack
*/
if (needle[len2 + 1] == 0)
{
return (haystack + len1);
}
}
}
return (0);
}

