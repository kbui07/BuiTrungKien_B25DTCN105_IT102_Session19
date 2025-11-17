#include <stdio.h>

int average(int *arr, int n) {
	int sum=0;
	for (int i=0;i<n;i++) {
		sum += *(arr+i);
	}
	return (float) sum/n;
}

int main() {
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++) {
		printf("Nhap phan tu thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	float avg=average(arr,n);
	printf("Gia tri trung binh: %.2f\n",avg);
	return 0;
}

