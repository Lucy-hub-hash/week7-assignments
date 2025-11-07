#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    char regNo[20];
    int totalMarks;
} Student;

int main() {
    FILE *file;
    Student student;

    // Open binary file for reading
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Results:\n");

    // Read records until end of file
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        printf("Name: %s, Total Marks: %d\n", student.name, student.totalMarks);
    }

    // Close file
    fclose(file);

    return 0;
}
