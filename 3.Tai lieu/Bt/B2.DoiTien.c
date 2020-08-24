#include<stdio.h>
#include<math.h>
double conversion(double euros){
	double vietNamDongs = 0;
	
	vietNamDongs = 22864.0426 * euros;
	return vietNamDongs; 
}
int main(){
	double e=0;
	printf("Nhap so tien euros: ");
	scanf("%lf", &e);
	printf("Gia tri qui doi sang tien Viet la:\n%.3lf * 22864.0426 = %.3lf", e, conversion(e));
	return 0;
}

