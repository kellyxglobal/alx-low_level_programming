#include <stdio.h>

enum {SUCCESS, FAIL};

int main(retval){

	FILE *fptr;
	char filename[] = "main.h";
	int retval = SUCCESS;

	if (fptr = ((int*) fopen(filename, "r")) == NULL){
		printf("The file %s failed to open\n", filename);
		retval = FAIL;
	} else {
		printf("The value of fptr is 0X%p:", fptr);
		printf("Ready to close the file!");
		fclose(fptr);
	}
	return retval;

}
