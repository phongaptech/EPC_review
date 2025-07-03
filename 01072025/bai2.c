#include <stdio.h>

int main() {
    float da, r, c, d;
    printf("Nhap chieu dai va chieu rong: ");
    scanf("%f %f", &da, &r);

    c = 2 * (da + r);
    d = da * r;

    printf("Chu vi: %.0f\n", c);
    printf("Dien tich: %.1f\n", d);

    return 0;
}
