#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }
    printf("Elements of the allocated memory:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory reallocation failed.\n");
        exit(1);
    }

    for (i = 5; i < 10; i++)
    {
        ptr[i] = i + 1;
    }
    printf("Elements of the reallocated memory:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);

    return 0;
}
