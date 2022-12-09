#include <stdio.h>
/**
* main - Entry point for all programs
* Return:Always zero when program runs successfully
*/
int main(void)
{
	char mychar;
	int myint;
	long int mylongint;
	long long int mylonglongint;
	float myfloat;

	printf("Size of a char: %ld byte(s)\n", sizeof(mychar));
	printf("Size of an int: %ld byte(s)\n", sizeof(myint));
	printf("Size of a long int: %ld byte(s)\n", sizeof(mylongint));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(mylonglongint));
	printf("Size of a float: %ld byte(s)\n", sizeof(myfloat));

	return (0);
}

