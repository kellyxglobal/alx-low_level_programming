#include <stdio.h>
#include <stdlib.h>

int main()
{

	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int num, i;

	// Get the number of elements for the array
	num = 5;
	printf("Enter number of elements: %d\n", num);

	// Dynamically allocate memory using calloc()
	ptr = (int*)calloc(num, sizeof(int));

	// Check if the memory has been successfully
	// allocated by calloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using calloc.\n");

		// Get the elements of the array with a loop
		for (i = 0; i < num; ++i) {
			ptr[i] = i + 1;
		}

		// display the elements of the array
		printf("The elements of the array are: \n");
		for (i = 0; i < num; ++i) {
			printf("%d, \n", ptr[i]);
		}
	}

	return 0;
}

