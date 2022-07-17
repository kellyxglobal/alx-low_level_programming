#include <stdio.h>

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (j == 0)
			{
				putchar(k + '0');
			}
			if (k < 10 && j != 0)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(k + '0');
			}
		
		}
		putchar('\n');
	}
	putchar('\n');
}
