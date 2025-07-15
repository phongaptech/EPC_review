#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int *arr = (int*) calloc(n, sizeof(int));

    printf("Gia tri ban dau (sau calloc):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap gia tri moi:\n");
    for (i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Mang sau khi nhap:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
