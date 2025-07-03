#include <stdio.h>

int main() {
    float a, b, c, t;
    printf("Nhap ba so thuc: ");
    scanf("%f %f %f", &a, &b, &c);

    t = (a + b + c) / 3;
    printf("Trung binh cong: %.2f\n", t);

    return 0;
}
