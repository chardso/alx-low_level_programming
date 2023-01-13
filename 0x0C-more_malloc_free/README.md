# 0x0C. C - More malloc, free
## Project description


### Tasks
#### 0. Trust no one 

#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc

 * @b: unsigned integer

 * Return: Always 0

 */

void *malloc_checked(unsigned int b)

{

int *allocateMemory = malloc(b);


if (allocateMemory == NULL)

exit(98);

return (allocateMemory);

}

#### 1. string_nconcat 

#include "main.h"

/**

 * *string_nconcat - concatenates two strings
 
* @s1: string one
 
* @s2: string two
 
* @n: no. of bytes
 
* Return: Always 0
 
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{

char *s3;

unsigned int slen1, slen2, i, j;

if (s1 == NULL)

s1 = "";

if (s2 == NULL)

s2 = "";

for (slen1 = 0; s1[slen1] != 0; slen1++)

{

}

for (slen2 = 0; s2[slen2] != 0; slen2++)

{

}

if (n >= slen2)

n = slen2;

s3 = malloc(sizeof(char) * slen1 + n + 1);

if (s3 == NULL)

return (NULL);

for (i = 0; s1[i] != 0; i++)

{

s3[i] = s1[i];

}

for (j = 0; j < n; j++)

{

s3[j + i] = s2[j];

}

s3[j + i] = 0;

return (s3);

}
