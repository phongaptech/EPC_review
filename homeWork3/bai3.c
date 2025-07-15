#include <stdio.h>

struct SinhVien {
    char ten[50];
    int tuoi;
    float diem;
};

void selectionSort(struct SinhVien *ds, int n) {
    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if ((ds + j)->tuoi > (ds + max)->tuoi) {
                max = j;
            }
        }
        if (max != i) {
            struct SinhVien temp = *(ds + i);
            *(ds + i) = *(ds + max);
            *(ds + max) = temp;
        }
    }
}

void inDS(struct SinhVien *ds, int n) {
    for (int i = 0; i < n; i++) {
        printf("%s - Tuoi: %d\n", (ds + i)->ten, (ds + i)->tuoi);
    }
}

int main() {
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    struct SinhVien ds[n];
    for (int i = 0; i < n; i++) {
        printf("Ten: "); scanf(" %[^\n]", (ds + i)->ten);
        printf("Tuoi: "); scanf("%d", &(ds + i)->tuoi);
        printf("Diem: "); scanf("%f", &(ds + i)->diem);
    }

    selectionSort(ds, n);
    printf("\nDanh sach sau sap xep giam dan theo tuoi:\n");
    inDS(ds, n);
    return 0;
}
