#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;

    printf("x  = %d\n", x);
    printf("&x = %p\n", (void *)&x);
    printf("p  = %p\n", (void *)p);
    printf("*p = %d\n", *p);

    *p = 42;

    printf("*p = %d\n", *p);
    printf("x  = %d\n", x);
    int y = 99;
    p = &y;
    *p = 100;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;
}