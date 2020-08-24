#include<stdio.h>
#include<math.h>
void nhap(float *m, float *n){
	printf("Nhap vao so thuc m: "); scanf("%f", m);
	printf("Nhap vao so thuc n: "); scanf("%f", n);
}
float g(float x){
	float gt=0;
	if(x>100){
		gt = x*sin(x+2)+5;
	}
	else gt = sqrt(2*fabs(x)+3);
	return gt;
}
float f(float x, float y){
	float ft;
	ft = fabs(g(x)-sqrt(17))*(g(x)+log10(fabs(g(x))+25))+y;
	return ft;
}	
int main(){
	float m, n, gx, fx;
	nhap(&m, &n);
	gx = g(m);
	fx = f(m, n);
	printf("Gia tri gx %f\n", gx);
	printf("Gia tri cua fx la: %f", fx);
	return 0;
}
