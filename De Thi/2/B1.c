#include<stdio.h>
#include<math.h>
int nhap_x(){
	double x;
	do{
		printf("Nhap vao so thuc x thuoc khoang (-4;4): "); scanf("%lf", &x);
	}while(x<=-4 || x>=4);
	return x;
}
double Y4(double x){
	double t=0;
	t = exp(-3*x) + sin(x) + 5*cos(x) + log(x);
	return t;
}
void hien_thi(double x){
	printf("Gia tri cua Y4 = %lf", Y4(x));
}
int main(){
	double x;
	x = nhap_x();
	Y4(x);
	hien_thi(x);
	return 0;
}


