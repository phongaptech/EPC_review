#include <stdio.h>

struct Diem {
    float diemToan;
    float diemVan;
    float diemTB;
};

struct SinhVien {
    char ten[50];
    int tuoi;
    struct Diem diem;
};

void nhapDS(struct SinhVien *ds, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap SV thu %d:\n", i + 1);
        printf("Ten: "); scanf(" %[^\n]", (ds + i)->ten);
        printf("Tuoi: "); scanf("%d", &(ds + i)->tuoi);
        printf("Diem Toan: "); scanf("%f", &(ds + i)->diem.diemToan);
        printf("Diem Van: "); scanf("%f", &(ds + i)->diem.diemVan);
        (ds + i)->diem.diemTB = ((ds + i)->diem.diemToan + (ds + i)->diem.diemVan) / 2;
    }
}

void insertionSort(struct SinhVien *ds, int n) {
    for (int i = 1; i < n; i++) {
        struct SinhVien temp = *(ds + i);
        int j = i - 1;
        while (j >= 0 && (ds + j)->diem.diemTB > temp.diem.diemTB) {
            *(ds + j + 1) = *(ds + j);
            j--;
        }
        *(ds + j + 1) = temp;
    }
}

void inDS(struct SinhVien *ds, int n) {
    for (int i = 0; i < n; i++) {
        printf("%s - TB: %.2f\n", (ds + i)->ten, (ds + i)->diem.diemTB);
    }
}

int main() {
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);

    struct SinhVien ds[n];
    nhapDS(ds, n);
    insertionSort(ds, n);
    printf("\nDanh sach sau sap xep theo diem TB:\n");
    inDS(ds, n);
    return 0;
}
