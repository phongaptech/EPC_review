#include <stdio.h>

int main() {
    int n, i, tong = 0;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", p + i);
    }

    for (i = 0; i < n; i++) {
        tong += *(p + i);
    }

    printf("Tong cac phan tu: %d\n", tong);
    return 0;
}
