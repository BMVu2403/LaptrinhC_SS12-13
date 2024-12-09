#include <stdio.h>
void mang(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    printf("Cac phan tu trong mang la:");
    mang(arr,n);
    return 0;
}
