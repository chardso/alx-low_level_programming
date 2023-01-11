#include <stdio.h>
/**
 * main - prints all arguements passed
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}


