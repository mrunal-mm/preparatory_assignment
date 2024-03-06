#include <stdio.h>

int main(){
    int numOfSubjects = 5, totalMarks = 0, marks;

    // enter marks
    for (int i=0; i<numOfSubjects; i++){
        printf("Enter marks for subject-%d (max marks = 20): ", i+1);
        scanf("%d", &marks);
        totalMarks += marks;
    }

    printf("Total marks - %d.\n", totalMarks);
    if (totalMarks >=90) printf("Grade - Ex");
    else if (totalMarks >= 80) printf("Grade - A");
    else if (totalMarks >= 70) printf("Grade - B");
    else if (totalMarks >= 60) printf("Grade - C");
    else printf("Grade - F");
    printf("\n");

    return 0;
}