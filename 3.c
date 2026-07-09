#include <stdio.h>

void set_value(int value) {
    value = 42;
}

void set_value_via_pointer(int *address) {
    *address = 42;
}

int main(void) {
    int x = 10;

    set_value(x);
    printf("set_value の後: x = %d\n", x);

    set_value_via_pointer(&x);
    printf("set_value_via_pointer の後: x = %d\n", x);

    return 0;
}