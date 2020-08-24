#include<stdio.h>
#include<math.h>
void nhap(float *x, int *n){
	printf("Nhap vao so thuc x: "); scanf("%f", x);
	printf("Nhap vao so nguyen n: "); scanf("%d", n);
}
float f3(float x, int n){
	int i;
	float a=1, t=1;
	int gt=1;
	for(i=1; i<=n; i++){
		a *= x;
		gt *= i;
		t += (a+2*i)/gt;
	}
	return t;
}
int main(){
	float x;
	int n;
	nhap(&x, &n);
	if(n>0)
		printf("Gia tri cua bieu thuc F3 = %f", f3(x, n));
	return 0;
}


