#include <stdio.h>
#include <math.h>

int isPrime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

void printEven(int *arr, int n) {
    printf("Cac so chan: ");
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0)
            printf("%d ", *(arr + i));
    }
    printf("\n");
}

void printPrime(int *arr, int n) {
    printf("Cac so nguyen to: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(*(arr + i)))
            printf("%d ", *(arr + i));
    }
    printf("\n");
}

void reverseArray(int *arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = temp;
    }
}

void sortAscending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void sortDescending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) < *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int searchValue(int *arr, int n, int x) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) return i;
    }
    return -1;
}

int main() {
    int arr[100];
    int n = 0;
    int choice;

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Nhap mang\n");
        printf("2. In cac so chan\n");
        printf("3. In cac so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Tim kiem phan tu\n");
        printf("7. Thoat\n");
        printf("==========================\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("Nhap so phan tu: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++) {
                printf("arr[%d] = ", i);
                scanf("%d", arr + i);
            }
            break;
        case 2:
            printEven(arr, n);
            break;
        case 3:
            printPrime(arr, n);
            break;
        case 4:
            reverseArray(arr, n);
            printf("Mang sau khi dao nguoc: ");
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
            break;
        case 5: {
            int subChoice;
            printf("\n--- MENU SAP XEP ---\n");
            printf("1. Tang dan\n");
            printf("2. Giam dan\n");
            printf("Lua chon: ");
            scanf("%d", &subChoice);
            if (subChoice == 1) {
                sortAscending(arr, n);
                printf("Mang sau khi sap xep tang dan: ");
            } else {
                sortDescending(arr, n);
                printf("Mang sau khi sap xep giam dan: ");
            }
            for (int i = 0; i < n; i++) printf("%d ", arr[i]);
            printf("\n");
            break;
        }
        case 6: {
            int x;
            printf("Nhap gia tri can tim: ");
            scanf("%d", &x);
            int pos = searchValue(arr, n, x);
            if (pos == -1)
                printf("%d khong co trong mang.\n", x);
            else
                printf("%d nam o vi tri index %d.\n", x, pos);
            break;
        }
        case 7:
            printf("Thoat chuong trinh...\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (choice != 7);
    return 0;
}

