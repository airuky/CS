#include <stdio.h>

int main(void) {
    int x = 0x41414141;
    char buf[8] = "hello";

    printf("x   = 0x%x\n", x);
    printf("&x  = %p\n", (void *)&x);
    printf("buf = %p\n", (void *)buf);
    printf("&buf = %p\n", (void *)&buf);
    printf("%p\n", (void *)(buf + 1));   // 1バイト先
    printf("%p\n", (void *)(&buf + 1)); // 8バイト先

    return 0;
}