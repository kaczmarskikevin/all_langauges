#include <stdio.h>

int main(void) {

    int number = 10;

    printf("int number address is %p!\n", &number);
    printf("int number value is %p!\n", number);
    printf("int number value is %d!\n", number);

    int* number_p = &number;

    printf("pointer number_p address is %p!\n", &number_p);
    printf("pointer number_p value is %p!\n", *number_p);
    printf("pointer number_p value is %d!\n", number_p);
}