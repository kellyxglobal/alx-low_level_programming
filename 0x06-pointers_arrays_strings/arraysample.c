#include <stdio.h>

/**
 * A program to print two dimensional array
 * Declare the array element
 * Declare to variables as th sunscript
 */

int main()
{
	int a[2][3];
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter the value for a[%d][%d]:", i, j );
			scanf("%d", &a[i][j]);
		}
	}
	printf("Two Dimensional Array:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d", a[i][j]);
			if(j==2)
			{
				printf("\n");
			}
		}
	}

	return(0);
}
