#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void inputMatrix(int mat[MAX][MAX], int rows, int cols) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void displayMatrix(int mat[MAX][MAX], int rows, int cols) {
    printf("\nMatrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%6d ", mat[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int rows, cols, choice;
    
    printf("Enter dimensions of matrices:\n");
    printf("Number of rows: ");
    scanf("%d", &rows);
    printf("Number of columns: ");
    scanf("%d", &cols);
    
    if (rows <= 0 || cols <= 0 || rows > MAX || cols > MAX) {
        printf("Invalid dimensions!\n");
        return 1;
    }
    
    printf("\n--- Matrix 1 ---\n");
    inputMatrix(mat1, rows, cols);
    
    printf("\n--- Matrix 2 ---\n");
    inputMatrix(mat2, rows, cols);
    
    while (1) {
        printf("\n--- Matrix Addition and Subtraction ---\n");
        printf("1. Add Matrices\n");
        printf("2. Subtract Matrices\n");
        printf("3. Display Matrix 1\n");
        printf("4. Display Matrix 2\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("\n--- Matrix Addition ---\n");
                addMatrices(mat1, mat2, result, rows, cols);
                displayMatrix(mat1, rows, cols);
                printf("+");
                displayMatrix(mat2, rows, cols);
                printf("=");
                displayMatrix(result, rows, cols);
                break;
                
            case 2:
                printf("\n--- Matrix Subtraction ---\n");
                subtractMatrices(mat1, mat2, result, rows, cols);
                displayMatrix(mat1, rows, cols);
                printf("-");
                displayMatrix(mat2, rows, cols);
                printf("=");
                displayMatrix(result, rows, cols);
                break;
                
            case 3:
                printf("\n--- Matrix 1 ---");
                displayMatrix(mat1, rows, cols);
                break;
                
            case 4:
                printf("\n--- Matrix 2 ---");
                displayMatrix(mat2, rows, cols);
                break;
                
            case 5:
                printf("Exiting...\n");
                exit(0);
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
