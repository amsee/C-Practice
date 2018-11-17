// Flags
// flag.c

#include <stdio.h>

int main(void)
{
	int i;
	int done = 0;  // flag
	int total = 0; // accumulator
	int value = 0;

	for (i = 0; i < 10 && done == 0; i++) {
		printf("Enter integer (0 to stop) ");
		scanf("%d", &value);

		if (value == 0)
			done = 1;
		else
			total += value;
	}
	printf("Total = %d\n", total);
}

/* OUTPUT

Enter integer (0 to stop) 45
Enter integer (0 to stop) 32
Enter integer (0 to stop) 3
Enter integer (0 to stop) -6
Enter integer (0 to stop) 0
Total = 74

*/