#include<stdio.h>
#include<math.h>
void nhap(float *x, int *n){
	printf("Nhap so thuc x:"); scanf("%f", x);
	printf("Nhap so nguyen n: "); scanf("%d", n);
}
float f1(float x, int n){
	int i;
	float a = 1, t = 1, o=1;
	for(i=1; i<=n; i++){
		a *= x;
		o *= -1;
		t += o*a;
	}
	return t;
}
float f2(float x, int n){
	int i;
	float a = 1, t = 1;
	for(i=1; i<=n; i++){
		a *= x;
		t += pow(-1,i)*(a/i);
	}
	return t;
}
int main(){
	float x=0;
	int n=0;
	nhap(&x, &n);
	printf("Gia tri cua bieu thuc F1=%.3f\n", f1(x,n));
	printf("Gia tri cua bieu thuc F2=%.3f", f2(x,n));
	return 0;
}


