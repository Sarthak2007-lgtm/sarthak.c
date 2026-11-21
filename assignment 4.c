#include <stdio.h>
int main() {
int a[10][10], b[10][10], res[10][10];
int r1, c1, r2, c2, i, j, k, choice;
printf("Enter rows and columns for first matrix: ");
scanf("%d %d", &r1, &c1);
printf("Enter rows and columns for second matrix: ");
scanf("%d %d", &r2, &c2);
printf("Enter elements of first matrix:\n");
for (i = 0; i < r1; i++) {
for (j = 0; j < c1; j++) {
scanf("%d", &a[i][j]);
}
}
printf("Enter elements of second matrix:\n");
for (i = 0; i < r2; i++) {
for (j = 0; j < c2; j++) {
scanf("%d", &b[i][j]);
}
}
while (1) {
printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Exit\nEnter choice: ");
scanf("%d", &choice);
if (choice == 4) {
break;
}
switch (choice) {
case 1:
if (r1 == r2 && c1 == c2) {
printf("Sum of matrices:\n");
for (i = 0; i < r1; i++) {
for (j = 0; j < c1; j++) {
res[i][j] = a[i][j] + b[i][j];
printf("%d\t", res[i][j]);
}
printf("\n");
}
} else {
printf("Addition not possible. Dimensions must match.\n");
}
break;
case 2:
if (r1 == r2 && c1 == c2) {
printf("Difference of matrices:\n");
for (i = 0; i < r1; i++) {
for (j = 0; j < c1; j++) {
res[i][j] = a[i][j] - b[i][j];
printf("%d\t", res[i][j]);
}
printf("\n");
}
} else {
printf("Subtraction not possible. Dimensions must match.\n");
}
break;
case 3:
if (c1 == r2) {
printf("Product of matrices:\n");
for (i = 0; i < r1; i++) {
for (j = 0; j < c2; j++) {
res[i][j] = 0;
for (k = 0; k < c1; k++) {
res[i][j] += a[i][k] * b[k][j];
}
printf("%d\t", res[i][j]);
}
printf("\n");
}
} else {
printf("Multiplication not possible. Columns of first must equal rows of second.\n");
}
break;
default:
printf("Invalid choice.\n");
}
}
return 0;
}
