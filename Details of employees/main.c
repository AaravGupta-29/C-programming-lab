#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    float salary;
} ;

void displayEmployeesLessThanSalary(struct Employee employees[], int numEmployees, float thresholdSalary) {
    int found = 0;
    printf("Employees with salary less than %.2f are:\n", thresholdSalary);
    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].salary < thresholdSalary) {
            printf("Name: %s\tSalary: %.2f\n", employees[i].name, employees[i].salary);
            found = 1;
        }
    }
    if (!found) {
        printf("No employees found with salary less than %.2f\n", thresholdSalary);
    }
}

int main() {
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    struct Employee *employees = (struct Employee *)malloc(numEmployees * sizeof(struct Employee));

    for (int i = 0; i < numEmployees; i++) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", employees[i].name);

        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);
    }

    float thresholdSalary;
    printf("Enter the salary threshold: ");
    scanf("%f", &thresholdSalary);

    displayEmployeesLessThanSalary(employees, numEmployees, thresholdSalary);

    free(employees); // Free allocated memory
    return 0;
}


