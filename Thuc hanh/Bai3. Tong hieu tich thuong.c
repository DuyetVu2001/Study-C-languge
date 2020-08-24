#include<stdio.h>
#include<math.h>
int main (){
	int a, b, tong, hieu, tich;
	float thuong;
	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
	printf("\nNhap so nguyen b: ");
	scanf("%d",&b);
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = (float) a / b;
	
	printf("\nTong hai so la: %d", tong);
	printf("\nHieu hai so la: %d", hieu);
	printf("\nTich hai so la: %d", tich);
	printf("\nThuong %d/%d = %lf", a, b, thuong);

	return 0;
}

