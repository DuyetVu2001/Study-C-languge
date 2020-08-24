#include<stdio.h>
#include<math.h>
void nhap(float *x, float *y, float *z, float *g){
	printf("Nhap so thuc a: "); scanf("%f", x);
	printf("Nhap so thuc b: "); scanf("%f", y);
	printf("Nhap so thuc c: "); scanf("%f", z);
	printf("Nhap so thuc d: "); scanf("%f", g);
}
float f(float x){
	int i;
	float a=1, t=1;
	for(i=1;i<=5;i++){
		a *= x;
		t += a;
	}
	return t;
}
int main(){
	float a, b, c, d, t=0;
	nhap(&a, &b, &c, &d);
	t = f(a)+f(b)+f(c)+f(d);
	printf("Gia tri can tim la: %f", t);
	return 0;
}


