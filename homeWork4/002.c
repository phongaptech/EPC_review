#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void question1() {
    int n, i;
    float price, total = 0;
    printf("Question 1\n");
    printf("Enter the number of items: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number of items.\n");
        return;
    }
    for (i = 1; i <= n; i++) {
        printf("Enter price of item %d: ", i);
        scanf("%f", &price);
        if (price < 0) {
            printf("Price must be positive.\n");
            return;}
        total += price;
    }
    printf("Total cost: $%.2f\n", total);
}


void question2() {
    double a, b, c, d, e, result;
    printf("Question 2\n");
    printf("Enter value for a: ");
    scanf("%lf", &a);
    printf("Enter value for b: ");
    scanf("%lf", &b);
    printf("Enter value for c: ");
    scanf("%lf", &c);
    printf("Enter value for d: ");
    scanf("%lf", &d);
    printf("Enter value for e: ");
    scanf("%lf", &e);
    if (e == 0) {
        printf("Error: e cannot be zero.");
        return;
    }
    result = pow(a + b, c) - (d / e);
    printf("Result: %.2f\n", result);
}

void question5() {
    int n, i, j, temp;
    int *arr;
    printf("Question 5\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid number.\n");
        return;
    }
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.");
        return;}

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
}
int main() {
    question1();
    question2();
    question5();
    return 0;
}
