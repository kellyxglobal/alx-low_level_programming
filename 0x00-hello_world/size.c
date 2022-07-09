#include <stdio.h>

/**
 * Entry Point -  Main
 * A program to display the size of 
 * various types of data
 */
int main(void)
{
	char c;
	int i;
	long e;
	double g;
	float h;
	printf("The size of char: %lu. \n", (unsigned long)sizeof(c));
	printf("The size of int: %lu. \n", (unsigned long)sizeof(i));
	printf("The size of long: %lu. \n", (unsigned long)sizeof(e));
	printf("The size of double: %lu. \n", (unsigned long)sizeof(g));
	printf("The size of float: %lu. \n", (unsigned long)sizeof(h));
	return(0);
}
