#include <stdio.h>

int main() {
    int matrix[3][3], i, j, sum = 0, max;
    printf("Enter a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    max = matrix[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum += matrix[i][j];
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    printf("Sum of all elements: %d\n", sum);
    printf("Largest element: %d\n", max);

    return 0;
}
