#include <stdio.h>

int main(void) {
  long int myVar = 0xcc23a54;
  printf("Original is: %lx\n", myVar);
  printf("Result is: %x\n", (unsigned char) myVar );
}
