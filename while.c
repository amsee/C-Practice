// While Construct
// while.c

#include <stdio.h>

int main(void)
{
	int slices = 4;

	while (slices > 0) {
		slices--;
		printf("Gulp! Slices left %d\n", slices);
	}
	return 0;
}

/* OUTPUT

Gulp! Slices left 3
Gulp! Slices left 2
Gulp! Slices left 1
Gulp! Slices left 0
*/