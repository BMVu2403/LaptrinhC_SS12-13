#include <stdio.h>

int goodNum(int n){
    int sum = 0;
    for (int i = 1;i <= n / 2; i++){
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum==n){
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int a, b;
    printf("Nhap so nguyen thu 1: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu 2: ");
    scanf("%d", &b);

    if (goodNum(a)){
        printf("%d La so hoan hao\n", a);
    } else {
        printf("%d Khong la so hoan hao\n", a);
    }
    if (goodNum(b)){
        printf("%d La so hoan hao\n", b);
    } else {
        printf("%d Khong la so hoan hao\n", b);
    }
    return 0;
}
