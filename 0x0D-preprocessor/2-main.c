#include <stdio.h>

/**
 * main - Program to print the filename it was compiled from
 * Return 0;
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
