#include <stdio.h>

/**
 * Main - A program to print 9 time table
 * 
 * Return Success 0 - 
 */
int main(void)
{
	int n = 9, count = 1;
	do 
	{
		printf("9 * %d = %d\n", count, n * count);
		count++;
	}
	while(count <= 10);
	return (0);
}
