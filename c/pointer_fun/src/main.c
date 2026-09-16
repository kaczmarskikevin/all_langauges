#include "stdio.h"
#include <project.h>

int main(void) {
    int number = 10;

    printf("int number address as pointer is %p\n", &number);
    printf("int number value as pointer is %p\n", number);
    printf("int number value as int is %d\n\n", number);

    int* number_p = &number;

    printf("&number_p as pointer is %p\n", &number_p);
    printf("*number_p as pointer is %p\n", *number_p);
    printf("number_p as pointer is %p\n", number_p);
    printf("&number_p as int is %d\n", &number_p);
    printf("*number_p as int is %d\n", *number_p);
    printf("number_p as int is %d\n\n", number_p);

    hello_t hello = { "hello"};
    
    printf("&hello.phrase as pointer is %p\n", &hello.phrase);
    printf("*hello.phrase as pointer is %p\n", *hello.phrase);
    printf("*hello.phrase as char is %c\n", *hello.phrase);
    printf("*hello.phrase as hex is %x\n", *hello.phrase);
    printf("*hello.phrase as string causes seg fault\n");
    printf("hello.phrase as string is %s\n", hello.phrase);
    printf("hello.phrase as hex is %x\n", hello.phrase);
    printf("hello.phrase as char is %c\n\n", hello.phrase);

    printf("*(&hello.phrase) as pointer is %p\n", *(&hello.phrase));
    printf("*(*(&hello.phrase)) as pointer is %p\n", *(*(&hello.phrase)));
    printf("*(hello.phrase) as pointer is %p\n", *(hello.phrase));
    printf("*(&hello.phrase) as pointer is %p\n", *(&hello.phrase));
    printf("hello.phrase as pointer is %p\n\n", hello.phrase);

    hello_t hello1 = { .phrase = "hello1\0"};
    
    printf("&hello1.phrase as pointer is %p\n", &hello1.phrase);
    printf("*hello1.phrase as pointer is %p\n", *hello1.phrase);
    printf("*hello1.phrase as char is %c\n", *hello1.phrase);
    printf("*hello1.phrase as hex is %x\n", *hello1.phrase);
    printf("*hello1.phrase as string causes seg fault\n");
    printf("hello1.phrase as string is %s\n", hello1.phrase);
    printf("hello1.phrase as hex is %x\n", hello1.phrase);
    printf("hello1.phrase as char is %c\n\n", hello1.phrase);

    printf("*(&hello1.phrase) as pointer is %p\n", *(&hello1.phrase));
    printf("*(*(&hello1.phrase)) as pointer is %p\n", *(*(&hello1.phrase)));
    printf("*(hello1.phrase) as pointer is %p\n", *(hello1.phrase));
    printf("*(&hello1.phrase) as pointer is %p\n", *(&hello1.phrase));
    printf("hello1.phrase as pointer is %p\n\n", hello1.phrase);
}