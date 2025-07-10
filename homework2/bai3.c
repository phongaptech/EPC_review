#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, tong = 0, max;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
        tong += arr[i];
        if (i == 0 || arr[i] > max) max = arr[i];
    }

    float tb = (float)tong / n;
    printf("Tong = %d, Trung binh = %.2f, Max = %d\n", tong, tb, max);

    free(arr);
    return 0;
}
