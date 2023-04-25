#include <stdio.h>
#define ROWS 3
#define COLS 3
void transpose(int matrix[][COLS]) {
int temp;
for (int i = 0; i < ROWS; i++) {
for (int j = i; j < COLS; j++) {
temp = matrix[i][j];
matrix[i][j] = matrix[j][i];
matrix[j][i] = temp;
}
}
}
int main() {
int matrix[ROWS][COLS] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};
printf("Original matrix:\n");
for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS; j++) {
printf("%d ", matrix[i][j]);
}
printf("\n");
}
transpose(matrix);
printf("\nTransposed matrix:\n");
for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS; j++) {
printf("%d ", matrix[i][j]);
}
printf("\n");
}
return 0;
}
