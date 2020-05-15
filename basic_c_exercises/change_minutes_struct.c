#include <stdio.h>

int main() {
    struct Time {
        unsigned hours :5,
                 minutes :6,
                 seconds :5;
    } time;

    time.hours = 10;
    time.minutes = 44;
    time.seconds = 16;

    printf("Time: %d:%d:%d\nSize: %lu\n", time.hours, time.minutes, time.seconds * 2, sizeof(time));
}