#include <stdio.h>
#include <string.h>

struct SinhVien {
    char ten[50];
    int tuoi;
    float diem;
};

void nhapDS(struct SinhVien *ds, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap sinh vien thu %d:\n", i + 1);
        printf("Ten: "); scanf(" %[^\n]", (ds + i)->ten);
        printf("Tuoi: "); scanf("%d", &(ds + i)->tuoi);
        printf("Diem: "); scanf("%f", &(ds + i)->diem);
    }
}

void sapXepTheoTen(struct SinhVien *ds, int n) {
    struct SinhVien temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp((ds + i)->ten, (ds + j)->ten) > 0) {
                temp = *(ds + i);
                *(ds + i) = *(ds + j);
                *(ds + j) = temp;
            }
        }
    }
}

void inDS(struct SinhVien *ds, int n) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - Tuoi: %d - Diem: %.2f\n", (ds + i)->ten, (ds + i)->tuoi, (ds + i)->diem);
    }
}

int main() {
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    struct SinhVien ds[n];
    nhapDS(ds, n);
    sapXepTheoTen(ds, n);
    inDS(ds, n);

    return 0;
}
