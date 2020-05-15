#include <stdio.h>

int main() {
    int time = 0b101001100010000;
    int hours;
    int minutes;
    int seconds;

    hours = (time >> 11) & 0x1F;
    minutes = (time >> 5) & 0x3F;
    seconds = time & 0x1F;


    printf("Old time: %d:%d:%d\n", hours, minutes, seconds * 2);


    time &= ~(0b111111 << 5);
    time |= (44 & 0x3F) << 5;


    hours = (time >> 11) & 0x1F;
    minutes = (time >> 5) & 0x3F;
    seconds = time & 0x1F;


    printf("New time: %d:%d:%d\n", hours, minutes, seconds * 2);
}