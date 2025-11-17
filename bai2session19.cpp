#include <stdio.h>

void countEvenOdd(int *arr, int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            (*even)++;
        else
            (*odd)++;
    }
}

int main() {
    int n;
    int arr[100];
    int even, odd;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    countEvenOdd(arr, n, &even, &odd);
    printf("\nSo phan tu chan: %d\n", even);
    printf("So phan tu le : %d\n", odd);
    return 0;
}

