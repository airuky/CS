#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t count = 4;
    int *numbers = malloc(count * sizeof *numbers);

    if (numbers == NULL) {
        fputs("malloc failed\n", stderr);
        return 1;
    }

    for (size_t i = 0; i < count; i++) {
        numbers[i] = (int)((i + 1) * 10);
    }

    for (size_t i = 0; i < count; i++) {
        printf("numbers[%zu] = %d, address = %p\n",
               i, numbers[i], (void *)&numbers[i]);
    }

    free(numbers);
    numbers = NULL;
    return 0;
}