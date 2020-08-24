#include<stdio.h>
#include<math.h>
void conversion(double vietNamDongs){
	double euros = 0;
	euros = vietNamDongs / 22864.0426;
	printf("Gia tri quy doi sang tien Euros la:\n%.3lf / 22864.0426 = %.3lf", vietNamDongs, euros);
}
int main(){
	double v;
	printf("Nhap so tien:");
	scanf("%lf", &v);
	conversion(v);
	return 0;
}


