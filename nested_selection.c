// Nested Selections
// nested_selection.c

#include <stdio.h>

int main(void) {

	int grade = 0;
	int sup = 0;

	if (grade < 50)
	{
		if (sup == 1)
			printf("Sup\n");
		else
			printf("Failed\n");
	}
	else
		printf("Pass\n");

	return 0;
}

/* OUTPUT

Failed

*/