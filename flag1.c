// Practice with flag
// flag1.c

#include <stdio.h>

int main(void) {
	 
	int x;
	int done = 0; // flag
	int total = 0; // accumulator 
	int pocket;

	for (x = 0; x < 10 && done == 0; x--) {
		printf("Enter Deposit (0 to stop) ");
		scanf("%d", &pocket);

		if (pocket == 0)
			done = 1;
		else
			total =- pocket;
	}
	printf("Total = %d", total);
	
	return 0;
}