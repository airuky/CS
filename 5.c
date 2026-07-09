#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int stack_value = 10;
    int *heap_value = malloc(sizeof *heap_value);

    if (heap_value == NULL) {
        fputs("malloc failed\n", stderr);
        return 1;
    }

    *heap_value = 42;

    printf("stack_value  = %d, &stack_value  = %p\n",
           stack_value, (void *)&stack_value);
    printf("heap_value   = %p, &heap_value   = %p\n",
           (void *)heap_value, (void *)&heap_value);
    printf("*heap_value  = %d\n", *heap_value);

    free(heap_value);
    heap_value = NULL;

    return 0;
}