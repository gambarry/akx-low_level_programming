#include <stdio.h>

/**
 * main - Program to print the filename it was compiled from
 * return 0;
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
