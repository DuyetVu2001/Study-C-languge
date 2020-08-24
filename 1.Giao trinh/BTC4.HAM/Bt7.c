#include<stdio.h>
#include<math.h>
void nhap(int *n, float *x){
	printf("Nhap vao so nguyen n: "); scanf("%d", n);
	printf("Nhap vao so thuc x: "); scanf("%f", x);
}
float f(int n, float x){
	float t=sqrt(17), a=1;
	int i;
	if(n<1 || n>10){
		t =0;
	}
	else{
		for(i=1; i<=n; i++){
			a *= x;
			t += a/5/i;
		}	
	}
	return t;
}
int main(){
	int n;
	float x;
	nhap(&n, &x);
	printf("Gia tri bieu thuc T = %f", f(n, x));
	return 0;
}


