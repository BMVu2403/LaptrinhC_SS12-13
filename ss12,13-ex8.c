#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    printf("\nUocc chung lon nhat cua %d va %d la: %d\n", a, b, ucln(a, b));

    return 0;
}

