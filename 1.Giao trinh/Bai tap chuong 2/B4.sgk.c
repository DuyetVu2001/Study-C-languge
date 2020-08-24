#include<stdio.h>
#include<math.h>
int main(){
	int a, b, tong, hieu, tich;
	float thuong;
	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
	printf("Nhap so nguyen b: ");
	scanf("%d", &b);
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (float) a / b;
	printf("\nTong la: %d", tong);
	printf("\nHieu la: %d", hieu);
	printf("\nTich la: %d", tich);
	printf("\nThuong la: %3.3f", thuong);

	return 0;
}


