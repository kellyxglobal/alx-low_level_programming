#include <stdio.h>
/**
 * A program to print iterations
 */
int main()
{
	int i, j;

	for(i = 0; i <= 20; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			printf("J: %d", j);
		}
		printf("i: %d\n", i);
	}
	return 0;
}
