#include <stdio.h>
int snt(int a) {
    if(a<2){
    	return 0;
	}
    for (int i = 2; i<=a; i++){
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int b, c;
    printf("Nhap vao so nguyen thu 1: ");
    scanf("%d", &b);
    printf("Nhap vao so nguyen thu 2: ");
    scanf("%d", &c);
    if(snt(b)){
        printf("%d la so nguyen to\n", b);
    }else{
        printf("%d khong la so nguyen to\n", b);
    }
    
    if(snt(c)){
        printf("%d la so nguyen to\n", c);
    }else{
        printf("%d khong la so nguyen to\n", c);
    }
    return 0;
}
