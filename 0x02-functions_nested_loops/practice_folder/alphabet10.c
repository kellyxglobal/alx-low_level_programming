#include <stdio.h>

int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
			putchar('\n');
		}
	}
	return (0);
}
