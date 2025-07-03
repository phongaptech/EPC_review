#include <stdio.h>

int main() {
    float a, b, d;
    printf("Nhap hai canh vuong: ");
    scanf("%f %f", &a, &b);

    d = 0.5 * a * b;
    printf("Dien tich tam giac vuong: %.2f\n", d);

    return 0;
}
