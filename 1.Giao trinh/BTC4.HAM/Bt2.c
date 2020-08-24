#include<stdio.h>
#include<math.h>
void nhap(float *x, char letter){
	printf("Nhap so thuc %c: ", letter); scanf("%f", x);
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
	nhap(&a, 'a');
	nhap(&b, 'b');
	nhap(&c, 'c');
	nhap(&d, 'd');
	t = f(a)+f(b)+f(c)+f(d);
	printf("Gia tri can tim la: %f", t);
	return 0;
}


