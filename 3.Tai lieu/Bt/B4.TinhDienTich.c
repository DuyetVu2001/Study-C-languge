#include<stdio.h>
#include<math.h>
double dienTichHCN(double chieuDai, double chieuRong){
	return chieuDai*chieuRong;
}
int main(){
	float x, y;
	printf("Nhap vao chieu dai, rong: ");
	scanf("%f%f", &x, &y);
	printf("Dien tich HCN = %.3f", dienTichHCN(x,y));
	return 0;
}


