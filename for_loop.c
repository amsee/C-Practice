// For Construct
// for_loop.c

#include <stdio.h>

int main(void)
{
	int slices = 4;

	for (slices = 4; slices > 0; --slices)
		printf("Gulp! Slices left %d\n", slices - 1);
}

/* OUTPUT

Gulp! Slices left 3
Gulp! Slices left 2
Gulp! Slices left 1
Gulp! Slices left 0

*/