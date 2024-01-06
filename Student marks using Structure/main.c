#include <stdio.h>

    struct Student {
    char name[50];
    int marks[5];
};

    int main()
  {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }
    printf("\nTotal marks for each student:\n");
    for (int i = 0; i < numStudents; i++)
    {
        int totalMarks = 0;
        for (int j = 0; j < 5; j++)
        {
            totalMarks += students[i].marks[j];
        }
        printf("%s: %d\n", students[i].name, totalMarks);
    }

    return 0;
}
