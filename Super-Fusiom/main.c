#include <stdio.h>

int main(void) {

	int life = 42;
	int* path_to_life = &life;

	printf("You are my %p cause bert.", path_to_life);
	return -1;
}
