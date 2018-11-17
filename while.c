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