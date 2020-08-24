#include<stdio.h>
#include<math.h>
int main(){
	int r;
	float cv, s;
	printf("Nhap ban kinh hinh tron: ");
	scanf("%d", &r);
	
	cv = 2*M_PI*r;
	s = pow(r,2)*M_PI;
	
	printf("\nChu vi hinh tron la: %f", cv);
	printf("\nDien tich hinh tron la: %f", s);
	

	return 0;
}


