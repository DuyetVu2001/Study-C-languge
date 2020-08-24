#include <stdio.h>
#include <conio.h>
float a, b, s, h; //float la kieu so thuc
int main(){
	printf("Nhap day lon a: ");
    scanf("%f", &a);
	printf("Nhap day nho b: ");
	scanf("%f", &b);
	printf("Nhap chieu cao h: ");
	scanf("%f", &h);
	s = (a + b) * h / 2;
	printf("Dien tich hinh thang la: %f", s);
	return 0;
}
    
