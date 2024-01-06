#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
void performOperations(struct Student students[], int size) {
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    struct Student students[size];


    for (int i = 0; i < size; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }
    performOperations(students, size);

    return 0;
}


