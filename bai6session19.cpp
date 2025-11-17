#include <stdio.h>

void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int n;
    int A[100], B[100];
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    printf("\nNhap mang A:\n");
    for (int i = 0; i < n; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    copyArray(A, B, n);
    printf("\nMang B sau khi sao chep:\n[ ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("]\n");
    return 0;
}

