#include <stdio.h>
int giaiThua(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int n;
    printf("Nhap vao so nguyen: ");
    scanf("%d", &n);
    int result = giaiThua(n);
    printf("Giai thua cua %d la: %d\n", n, result);
    return 0;
}

