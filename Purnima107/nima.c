#include <stdio.h>
#include <stdlib.h>

int main(void) {
  printf("Hello World");
  void *youngling = malloc(2147483648);
  printf("Nuh uh your program with FAIL xD.");
  printf(" ; (   ");
  printf("Damn I think I've forgotten C already");
  free(youngling);
  printf("Be free youngling!");
 *youngling = 0;
  return 1;
}
