#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i;
    printf("Nhap so phan tu ban dau: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap so phan tu muon them: ");
    scanf("%d", &m);

    arr = (int*) realloc(arr, (n + m) * sizeof(int));

    for (i = n; i < n + m; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang sau khi mo rong:\n");
    for (i = 0; i < n + m; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
