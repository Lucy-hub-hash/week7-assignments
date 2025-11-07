#include <stdio.h>

int main() {
    char title[100];
    FILE *file;

    // Open file in append mode so existing records are not deleted
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Prompt librarian to enter book title
    printf("Enter the book title to add: ");
    fgets(title, sizeof(title), stdin); // read full line including spaces

    // Write title to file
    fprintf(file, "%s", title);

    // Close file
    fclose(file);

    printf("Book title successfully stored in borrowed_books.txt.\n");

    return 0;
}
