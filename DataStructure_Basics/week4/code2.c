#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int row;
    int col;
    int value;
} MatrixElement;

int main() {
    int rows = 3;
    int cols = 3;

    // Create an array of MatrixElement to store non-continuous matrix elements
    MatrixElement** matrix = (MatrixElement**)malloc(rows * sizeof(MatrixElement*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (MatrixElement*)malloc(cols * sizeof(MatrixElement));
    }

    // Assign values to individual matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j].row = i;
            matrix[i][j].col = j;
            matrix[i][j].value = i * cols + j + 1;
        }
    }

    // Print the non-continuous matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("(%d, %d): %d\t", matrix[i][j].row, matrix[i][j].col, matrix[i][j].value);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
