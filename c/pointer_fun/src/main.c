#include "stdio.h"
#include <project.h>

int main(void) {
    int number = 10;

    printf("int number address is %p!\n", &number);
    printf("int number value is %p!\n", number);
    printf("int number value is %d!\n", number);

    int* number_p = &number;

    printf("&number_p is %p!\n", &number_p);
    printf("*number_p is %p!\n", *number_p);
    printf("number_p is %p!\n", number_p);
    printf("&number_p is %d!\n", &number_p);
    printf("*number_p is %d!\n", *number_p);
    printf("number_p is %d!\n", number_p);

    hello_t hello = {"hello\0"};
    
    printf("&hello.phrase is %p!\n", &hello.phrase);
    printf("*hello.phrase is %p!\n", *hello.phrase);
    printf("hello.phrase is %p!\n", hello.phrase);
    
}