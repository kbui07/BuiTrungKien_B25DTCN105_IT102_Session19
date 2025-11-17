#include <stdio.h>

int findMax (int *arr,int n) {
	int max=*arr;
	for (int i=1;i<n;i++) {
		if (*(arr+i)>max) {
			max=*(arr+i);
		}
	}
    return max;
}

int main() {
	int n,arr[n];
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		printf("NHap phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
	printf("So lon nhat la: %d",findMax(arr,n));
	return 0;
}
