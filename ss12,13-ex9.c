#include <stdio.h>

int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void nhapMang(int arr[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void inMang(int arr[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void xuLyMenu(int arr[100][100], int n, int m, int choice) {
    switch (choice) {
        case 1:
            nhapMang(arr, n, m);
            break;
        case 2:
            inMang(arr, n, m);
            break;
        case 3:
            printf("%d %d\n%d %d\n", arr[0][0], arr[0][m-1], arr[n-1][0], arr[n-1][m-1]);
            break;
        case 4:
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf((i == 0 || i == n-1 || j == 0 || j == m-1) ? "%d " : "0 ", arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 5:
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf((i == j || i + j == m - 1) ? "%d " : "0 ", arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 6:
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf(laSoNguyenTo(arr[i][j]) ? "%d " : "0 ", arr[i][j]);
                }
                printf("\n");
            }
            break;
        case 7:
            printf("\nThoat chuong trinh.\n");
            break;
        default:
            printf("\nLua chon khong hop le.\n");
    }
}

int main() {
    int n, m, arr[100][100], choice;

    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    do {
        printf("\nMENU\n1. Nhap mang\n2. In mang\n3. In goc\n4. In bien\n5. In cheo\n6. In so nguyen to\n7. Thoat\nChon: ");
        scanf("%d", &choice);
        xuLyMenu(arr, n, m, choice);
    } while (choice != 7);

    return 0;
}

