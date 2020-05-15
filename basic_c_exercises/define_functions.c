#include <stdio.h>

#define SUM(a,b)  (a+b)
#define TIMES(a,b)  ((a) * (b))

int main() {
    int result;

    result = 3 * SUM(3,5);
    printf("Result of sum: %d\n", result);
    result = TIMES(10-7,2+3);
    printf("Result of times: %d\n", result);
}