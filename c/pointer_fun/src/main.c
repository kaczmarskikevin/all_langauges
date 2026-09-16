int main(void) {

    int number = 10;

    printf("number is %d!\n", number);

    int* number_p = &number;

    printf("number_p is %p!\n", number_p);
    printf("number_p is %p!\n", *number_p);
}