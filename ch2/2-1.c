#include <limits.h>
#include <float.h>
#include <stdio.h>

int main() {
	int integer = 0;
	int old = 0;
	while (1) {
		old = integer++;
		if (old > integer) {
			printf("Computed MAX Integer: %d\n", old);
			printf("Queried  MAX Integer: %d\n", INT_MAX);
			printf("Computed MIN Integer: %d\n", integer);
			printf("Queried  MIN Integer: %d\n", INT_MIN);
			break;
		}
	}
	return 0;
}
