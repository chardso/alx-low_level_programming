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
i

