#include <stdio.h>
#include <stdlib.h>

int main() {
    float f = 32341234234234.70231423421340, f2 = -502.2, f3 = 7.35e2;
    printf("f: %f, f2: %f, f3: %f\n", f, f2, f3);
    printf("f Casted to int: %d\n", (int)f);
    printf("f Casted to unsigned int: %u\n", (unsigned int)f);
    printf("f Casted to char: %d\n", (char)f);
    printf("f2 Casted to char: %d\n", (char)f2);
    printf("f2 Casted to int: %d\n", (int)f2);
    printf("f2 Casted to unsigned in: %u\n", (unsigned int)f2);
    printf("f3 Casted to unsigned int: %u\n", (unsigned int)f3);
    printf("f3 Casted to char: %d\n", (char)f3);
    printf("f3 Casted to int: %d\n", (int)f3);
}