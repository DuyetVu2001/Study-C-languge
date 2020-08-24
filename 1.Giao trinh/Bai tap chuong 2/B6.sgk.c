#include<stdio.h>
#include<math.h>
int main(){
	float n, a, r, cv, s;
	printf("Nhap canh n cua tam giac: ");
	scanf("%f", &n);
	printf("Nhap ban kinh duong tron: ");
	scanf("%f", &r);
	
	a = 2*r*sin(M_PI/n);
	cv = n*a;
	s = (n/2)*r*r*sin(2*M_PI/n);
	printf("\nChu vi la: %f", cv);
	printf("\nDien tich la: %f", s);
	

	return 0;
}


