#include <stdio.h>

int main() {
    int a, b;
    char p;

    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);

    printf("Nhap phep toan +, -, *, /: ");
    scanf(" %c", &p);

    switch (p) {
        case '+':
            printf("Ket qua: %d\n", a + b);
            break;
        case '-':
            printf("Ket qua: %d\n", a - b);
            break;
        case '*':
            printf("Ket qua: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Ket qua: %.2f\n", (float)a / b);
            } else {
                printf("Loi: Khong the chia cho 0!\n");
            }
            break;
        default:
            printf("Phep toan khong hop le!\n");
    }

    return 0;
}
