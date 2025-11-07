#include <stdio.h>

int main() {
    FILE *file;
    double amount, total = 0;

    // Open sales file in read mode
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read all transactions and sum the total
    while (fscanf(file, "%lf", &amount) == 1) {
        total += amount;
    }

    // Close the file
    fclose(file);

    // Display total sales
    printf("Total sales for the day: %.2f KSh\n", total);

    return 0;
}
