#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: min value of the array
 * @max: max vlue of the array
 * Return: Always 0
 */
int *array_range(int min, int max)
{
int i;
int count = 0;
int *arrInt;

if (min > max)
return (NULL);
arrInt = malloc(sizeof(int) * (max - min + 1));
if (arrInt == NULL)
return (NULL);
for (i = min; i <= max; i++)
{
arrInt[count] = i;
count++;
}
return (arrInt);
}

