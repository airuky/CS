#include <stdio.h>

void observe(int value, int *address) {
    int local = 20;

    printf("[observe]\n");
    printf("value    = %d, &value    = %p\n", value, (void *)&value);
    printf("address  = %p, &address  = %p\n", (void *)address, (void *)&address);
    printf("*address = %d\n", *address);
    printf("local    = %d, &local    = %p\n", local, (void *)&local);
}

int main(void) {
    int x = 10;

    printf("[main]\n");
    printf("x = %d, &x = %p\n", x, (void *)&x);

    observe(x, &x);
    return 0;
}