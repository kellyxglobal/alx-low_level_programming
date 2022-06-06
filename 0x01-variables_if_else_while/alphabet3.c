#include <stdio.h>

/**
 * Main - Entry point
 * Dispaly small and capital letter letters
 * from a through Z with their ASCII code
 * return 0 (success)
 */
int main()
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		printf(" has the ASCII code of: %d\n", ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
		printf(" has the ASCCI code of: %d\n", ch);
	}
	putchar('\n');
	return(0);
}
