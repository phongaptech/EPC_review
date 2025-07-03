#include <stdio.h>

int main() {
    float d;
    printf("Nhap diem trung binh: ");
    scanf("%f", &d);

    if (d >= 8.5) {
        printf("Gioi\n");
    } else if (d >= 6.5) {
        printf("Kha\n");
    } else if (d >= 5.0) {
        printf("Trung binh\n");
    } else {
        printf("Yeu\n");
    }

    return 0;
}
