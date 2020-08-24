#include<stdio.h>
#include<math.h>
void nhap(int *a, int *b, double *x){
	printf("Nhap so nguyen a: "); scanf("%d", a);
	printf("Nhap so nguyen b: "); scanf("%d", b);
	printf("Nhap so thuc x: "); scanf("%lf", x);
}
double fx(int a, int b, double x){
	double t;
	if(a + b != 0)
		t = (double)(exp(x))/(a+b);
	else if(a == b && b == 0) t = 0;
	else
		t = (double)sqrt(a*a + b*b + 100) + pow(sin(x), 3);
	return t;
}
int main(){
	int a, b;
	double x;
	nhap(&a, &b, &x);
	printf("Gia tri cua ham so f(x) = %lf", fx(a, b, x));	
	return 0;
}


