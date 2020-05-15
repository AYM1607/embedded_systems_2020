#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 320;
    char *ptr;
    ptr = (char *)&a;
    printf("Valued: %d\n", *ptr);
}