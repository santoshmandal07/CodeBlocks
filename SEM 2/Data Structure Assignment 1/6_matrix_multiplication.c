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

void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied! (Columns of Matrix 1 must equal Rows of Matrix 2)\n");
        return;
    }
    
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int rows1, cols1, rows2, cols2, choice;
    
    printf("--- Matrix Multiplication ---\n");
    printf("Enter dimensions of Matrix 1:\n");
    printf("Number of rows: ");
    scanf("%d", &rows1);
    printf("Number of columns: ");
    scanf("%d", &cols1);
    
    printf("\nEnter dimensions of Matrix 2:\n");
    printf("Number of rows: ");
    scanf("%d", &rows2);
    printf("Number of columns: ");
    scanf("%d", &cols2);
    
    if (rows1 <= 0 || cols1 <= 0 || rows2 <= 0 || cols2 <= 0 ||
        rows1 > MAX || cols1 > MAX || rows2 > MAX || cols2 > MAX) {
        printf("Invalid dimensions!\n");
        return 1;
    }
    
    printf("\n--- Matrix 1 ---\n");
    inputMatrix(mat1, rows1, cols1);
    
    printf("\n--- Matrix 2 ---\n");
    inputMatrix(mat2, rows2, cols2);
    
    while (1) {
        printf("\n--- Matrix Operations ---\n");
        printf("1. Multiply Matrices\n");
        printf("2. Display Matrix 1\n");
        printf("3. Display Matrix 2\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                if (cols1 != rows2) {
                    printf("Cannot multiply! Matrix 1 has %d columns and Matrix 2 has %d rows.\n", cols1, rows2);
                } else {
                    printf("\n--- Matrix Multiplication ---\n");
                    multiplyMatrices(mat1, mat2, result, rows1, cols1, rows2, cols2);
                    displayMatrix(mat1, rows1, cols1);
                    printf("*");
                    displayMatrix(mat2, rows2, cols2);
                    printf("=");
                    displayMatrix(result, rows1, cols2);
                }
                break;
                
            case 2:
                printf("\n--- Matrix 1 ---");
                displayMatrix(mat1, rows1, cols1);
                break;
                
            case 3:
                printf("\n--- Matrix 2 ---");
                displayMatrix(mat2, rows2, cols2);
                break;
                
            case 4:
                printf("Exiting...\n");
                exit(0);
                
            default:
                printf("Invalid choice!\n");
        }
    }
    
    return 0;
}
