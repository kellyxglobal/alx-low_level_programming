#include <stdio.h>
#include <stdlib.h>

int main()
{

    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int num, i;

    // Get the number of elements for the array
    printf("Please, enter number of elements:");
    scanf("%d",&num);
    printf("The number of elements you entered is : %d\n", num);

    // Dynamically allocate memory using malloc() by 
    // a casting operator (int*)
    ptr = (int*)malloc(num * sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Sorry, memory allocation failed!.\n");
        exit(0);
    }
    else {

        // Memory has been successfully allocated
        printf("Congrats! Memory successfully allocated using malloc.\n");

        // Get the elements of the array
        for (i = 0; i < num; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < num; ++i) {
            printf("%d, \n", ptr[i]);
        }
    }

    return 0;
}
