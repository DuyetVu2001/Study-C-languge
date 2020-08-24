#include<stdio.h>
#include<math.h>
double f(int n){
	int i;
	double luyThua=1;
	for(i=2; i<=n; i++){
		luyThua *= i;
	}
	return luyThua;
}
void nhap(int *m, int *n){
	printf("Nhap so tu nhien m: "); scanf("%d", m);
	printf("Nhap so tu nhien n: "); scanf("%d", n);
}
int main(){
	int m, n;
	double T;
	nhap(&m, &n);
	if(m>0 && n>0){
		T = (double)((f(m)+f(n))/f(n+m));
		printf("Gia tri cua bieu thuc T la: %.20lf", T);
	}	
	return 0;
}


