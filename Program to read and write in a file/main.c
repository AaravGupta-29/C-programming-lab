#include <stdio.h>

int main()
{
    FILE *file;
    char data[100];
    file = fopen("example.txt", "w");

    fprintf(file, "Hello, World!");

    fclose(file);

    file = fopen("example.txt", "r");

    fgets(data, 100, file);

    printf("Data read from file: %s", data);

    fclose(file);

    return 0;
}
