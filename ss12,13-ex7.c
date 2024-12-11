#include <stdio.h>

void taoVaNhapMaTran(int maTran[100][100], int soHang, int soCot) {
    printf("\nNhap cac phan tu trong ma tran:\n");
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void inMaTran(int maTran[100][100], int soHang, int soCot) {
    printf("\nMa tran vua nhap:\n");
    for (int i = 0; i < soHang; i++) {
        for (int j = 0; j < soCot; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int soHang, soCot;
    int maTran[100][100];

    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &soHang);

    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &soCot);

    taoVaNhapMaTran(maTran, soHang, soCot);

    inMaTran(maTran, soHang, soCot);

    return 0;
}

