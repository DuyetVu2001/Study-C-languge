#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, d, t, tich, tbc;
	
	printf("Nhap so thuc thu nhat: ");
	scanf("%f", &a);
	printf("Nhap so thuc thu hai: ");
	scanf("%f", &b);
	printf("Nhap so thuc thu ba: ");
	scanf("%f", &c);
	printf("Nhap so thuc thu bon: ");
	scanf("%f", &d);
	
	t = a + b + c + d;
	tich = a * b * c * d;
	tbc = t / 4; 
	
	printf("\nTong cua bon so nguyen la: %f", t);
	printf("\nTich cua bon so nguyen la: %f", tich);
	printf("\nTrung binh cong cua bon so nguyen la: %f", tbc);
	
	return 0;
}


