#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float x, y, T, S;
	printf("Nhap vao so thuc x: ");
	scanf("%f", &x);
	printf("Nhap vao so thuc y: ");
	scanf("%f", &y);
	printf("Nhap vao so nguyen n: ");
	scanf("%d", &n);
	T=sqrt(pow(x,5)+exp(log(fabs(y))+1))+(1+sin(x))/(cos(n*x)+sqrt(2+abs(n)));
	S=abs(x-sqrt(17))*(y+log10(fabs(x)+25))+y;
	printf("\nT= %f", T);
	printf("\nS= %f", S);
	return 0;
}


