#include <stdio.h>

#define MAX 10

void readMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}
void printMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    int A[MAX][MAX], B[MAX][MAX], sum[MAX][MAX], diff[MAX][MAX];

    printf("Enter the number of rows and columns (max %d): ", MAX);
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0 || rows > MAX || cols > MAX) {
        printf("Invalid dimensions! Please enter values between 1 and %d.\n", MAX);
        return 1;
    }

    printf("\nEnter elements of Matrix A (%dx%d):\n", rows, cols);
    readMatrix(A, rows, cols);

    printf("\nEnter elements of Matrix B (%dx%d):\n", rows, cols);
    readMatrix(B, rows, cols);
 for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            diff[i][j] = A[i][j] - B[i][j];
    }
    }
printf("\nMatrix A:\n");
    printMatrix(A, rows, cols);
 printf("\nMatrix B:\n");
    printMatrix(B, rows, cols);
 printf("\nResult of Addition (A + B):\n");
    printMatrix(sum, rows, cols);
printf("\nResult of Subtraction (A - B):\n");
    printMatrix(diff, rows, cols);
return 0;
}
