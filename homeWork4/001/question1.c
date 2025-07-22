#include <stdio.h>
int main() {
    int a, b, c;
    while (1) {
        printf("Enter three integers: ");
        scanf("%d %d %d", &a, &b, &c);
        if (a > 0 && b > 0 && c > 0) {
            break;
        } else {printf("Error: All numbers must be positive.\n");}

    }
    float average = (a + b + c) / 3.0;
    printf("Average: %.2f\n", average);
    return 0;
}
