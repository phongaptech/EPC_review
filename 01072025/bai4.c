#include <stdio.h>

int main() {
    float c, f;
    printf("Nhap nhiet do C: ");
    scanf("%f", &c);

    f = c * 9 / 5 + 32;
    printf("Nhiet do F: %.2f\n", f);

    return 0;
}
