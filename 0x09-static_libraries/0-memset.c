#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: pointer of the memory location where the memory will be set.
 * @b: constant byte
 * @n: bytes of the memory area pointed by s.
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	/*While i is less than n bytes*/
	while (i < n)
	{
		/*b will be copied to the corresponding memory block*/
		s[i] = b;
		i++;
	}
	return (s);
}

