#include <stdio.h>

void nhapMang(int arr[], int *size) {
    printf("Nhap so phan tu: ");
    scanf("%d", size);
    for (int i = 0; i < *size; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void inMang(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *size, int index, int value) {
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    (*size)++;
}

void suaPhanTu(int arr[], int size, int index, int value) {
    if (index >= 0 && index < size) {
        arr[index] = value;
    }
}

void xoaPhanTu(int arr[], int *size, int index) {
    if (index >= 0 && index < *size) {
        for (int i = index; i < *size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
    }
}

void sapXepMang(int arr[], int size, int isAscending) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((isAscending && arr[i] > arr[j]) || (!isAscending && arr[i] < arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int timKiemTuyenTinh(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int timKiemNhiPhan(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

void xuLyMenu() {
    int arr[100], size = 0, choice;
    do {
        printf("\nMENU\n");
        printf("1. Nhap mang\n2. In mang\n3. Them phan tu\n4. Sua phan tu\n5. Xoa phan tu\n6. Sap xep\n7. Tim kiem\n8. Thoat\nChon: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                nhapMang(arr, &size);
                break;
            case 2:
                inMang(arr, size);
                break;
            case 3:
                {
                    int index, value;
                    printf("Nhap vi tri va gia tri: ");
                    scanf("%d %d", &index, &value);
                    themPhanTu(arr, &size, index, value);
                }
                break;
            case 4:
                {
                    int index, value;
                    printf("Nhap vi tri va gia tri moi: ");
                    scanf("%d %d", &index, &value);
                    suaPhanTu(arr, size, index, value);
                }
                break;
            case 5:
                {
                    int index;
                    printf("Nhap vi tri can xoa: ");
                    scanf("%d", &index);
                    xoaPhanTu(arr, &size, index);
                }
                break;
            case 6:
                {
                    int sortChoice;
                    printf("1. Tang dan\n2. Giam dan\nChon: ");
                    scanf("%d", &sortChoice);
                    sapXepMang(arr, size, sortChoice == 1);
                }
                break;
            case 7:
                {
                    int key, searchChoice, index;
                    printf("Nhap phan tu can tim: ");
                    scanf("%d", &key);
                    printf("1. Tim kiem tuyen tinh\n2. Tim kiem nhi phan\nChon: ");
                    scanf("%d", &searchChoice);
                    index = (searchChoice == 1) ? timKiemTuyenTinh(arr, size, key) : timKiemNhiPhan(arr, size, key);
                    if (index != -1) printf("Tim thay phan tu o vi tri %d.\n", index);
                    else printf("Khong tim thay phan tu.\n");
                }
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 8);
}

int main() {
    xuLyMenu();
    return 0;
}

