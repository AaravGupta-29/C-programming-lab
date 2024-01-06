#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student student;
    FILE *file = fopen("student_data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);
    printf("Enter marks: ");
    scanf("%f", &student.marks);

    fprintf(file, "Name: %s\n", student.name);
    fprintf(file, "Roll Number: %d\n", student.rollNumber);
    fprintf(file, "Marks: %.2f\n", student.marks);

    fclose(file);
    file = fopen("student_data.txt", "r");
    if (file == NULL) {
        printf("Error opening file!");
        return 1;
    }

    printf("\nStudent data from file:\n");
    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
