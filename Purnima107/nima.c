#include <stdio.h>
#include <stdlib.h>

int main (void) {
	printf("Hello World");
	void *thing = malloc(2147483648);
	printf("Nuh uh your program with FAIL xD.");
	return 1; 
}
