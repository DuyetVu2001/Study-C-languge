#include<stdio.h>
#include<math.h>
void dienTichHCN(float chieuDai, float chieuRong){
	float s=0;
	s = chieuDai*chieuRong;
	printf("Dien tich HCN la: %.3f", s);
}
int main(){
	float x, y;
	printf("Nhap chieu dai, rong: ");
	scanf("%f%f", &x, &y);
	dienTichHCN(x, y);
	return 0;
}


