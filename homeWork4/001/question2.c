#include <stdio.h>

int main() {
    int arr[10], i;
    int *start, *end, temp;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    start = arr;
    end = arr + 9;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed Array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
