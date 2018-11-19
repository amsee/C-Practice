// Read to a file
//read.c

#include <stdio.h>
int main(void)
{
	FILE*  betafp = NULL; // pointer alligned 

	betafp = fopen('beta.txt, r'); 
	if(betafp != NULL){

		// statements to be added later
		fclose(betafp); //0 sucess/EOF unsuccess

	} else {
		printf("Failed to open file\n");
	}
	return 0;
}

