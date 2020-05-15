#include<stdio.h>
#include<stdlib.h>
 
int main() {
 
    union {
        unsigned long dd;
        unsigned short dw[2];
        unsigned char db[4];
    } var;
 
    
    printf("Size of var: %lu\n", sizeof(var));
    printf("Size of var.dw: %lu\n", sizeof(var.dw[0]));
    printf("Size of var.db: %lu\n", sizeof(var.db[0]));
    var.dd = 2345918234908123;
    printf("Value of the long representation: %lu\n", var.dd);
    printf("Values of the shor representation: %d, %d\n", var.dw[0], var.dw[1]);
    printf("values of the char representations: %d, %d, %d, %d\n", var.db[0], var.db[1], var.db[2], var.db[3]);
    var.dw[0] = 1;
    var.dw[1] = 2;
    printf("Value of the long representation: %lu\n", var.dd);
    printf("Values of the shor representation: %d, %d\n", var.dw[0], var.dw[1]);
    printf("values of the char representations: %d, %d, %d, %d\n", var.db[0], var.db[1], var.db[2], var.db[3]);
 
    exit(EXIT_SUCCESS);
}