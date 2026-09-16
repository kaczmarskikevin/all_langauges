int main(void) {

    int number = 10;

    printf("number is %d!\r\n", number);

    int* number_p = &number;

    printf("number_p is %p!\r\n", number_p);
    printf("number_p is %d!\r\n", *number_p);
}