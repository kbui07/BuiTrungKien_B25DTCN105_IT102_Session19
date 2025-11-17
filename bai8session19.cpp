#include <stdio.h>

int main() {
	int n;
	int arr[100];
	int *p=arr;
	int choice;
	do{
		printf("\n===== MENU =====\n");
        printf("1. Nhap so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Moi ban chon: ");
        scanf("%d", &choice);
      switch (choice) {
      	case 1:
      		printf("Nhap so phan tu: ");
      		scanf("%d",&n);
      		for (int i=0;i<n;i++) {
      			printf("Nhap arr[%d]",i);
      			scanf("%d",(p+i));
			  }
	    break;
		case 2:
			printf("Cac phan tu: ");
			for (int i=0;i<n;i++) {
				printf("%d",*(p+i));
			}
			printf("\n");
		break;
		case 3:
			printf("Do dai mang = %d\n",n);
		break;
		case 4:{
			int sum = 0;
                for (int i = 0; i < n; i++) {
                    sum += *(p + i);
                }
                printf("Tong = %d\n", sum);
		break;
		}
		case 5: {
            int max = *p;
                for (int i = 1; i < n; i++) {
                    if (*(p + i) > max) {
                        max = *(p + i);
                    }
                }
                printf("Phan tu lon nhat: %d\n", max);
        break;
        }
		case 6:
		   	printf("Thoat chuong trinh...\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }
	} while (choice!=6);
	return 0;
}
