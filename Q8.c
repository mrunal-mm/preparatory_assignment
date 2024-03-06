#include <stdio.h>

struct Student {
    char studentName[50];
    char rollNo[5];
    int totalMarks;
};

void readStudentData(struct Student *student) {
    printf("Enter student name: ");
    scanf("%s", student->studentName);

    printf("Enter roll number: ");
    scanf("%s", student->rollNo);

    printf("Enter total marks: ");
    scanf("%d", &student->totalMarks);
}

void displayStudentData(struct Student student) {
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.studentName);
    printf("Roll Number: %s\n", student.rollNo);
    printf("Total Marks: %d\n", student.totalMarks);
}

int main() {
    struct Student student;

    readStudentData(&student);
    displayStudentData(student);

    return 0;
}
