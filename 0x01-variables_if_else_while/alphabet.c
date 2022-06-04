#include <stdio.h>

/**
 * main - Entry point
 * A program to display
 * alphabetic letters from a through z
 * Return 0 (success)
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{

		putchar(ch);
		printf(" has the ASCII character code of %d\n", ch);
	}
	putchar('\n');
	return(0);
}

