#include <stdio.h>

int countValue(int *arr, int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, x;
    int arr[100];
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap x: ");
    scanf("%d", &x);
    int result = countValue(arr, n, x);
    printf("\nSo lan xuat hien cua %d la: %d\n", x, result);
    return 0;
}

