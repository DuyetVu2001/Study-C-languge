#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int nhap_n(){
	int n;
	do{
		printf("Nhap vao so nguyen duong n: ");
		scanf("%d", &n);
	}while(n <= 0);
}

int kt_NT(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i < n; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void nSoNtDauTien(int n){
	int i, dem = 0;
	printf("%d so nguyen to dau tien la:\n\n", n);
	for(i = 2; ; i++){
		if(kt_NT(i) == 1){
			printf("%-5d", i);
			dem++;
		}
		if(dem == n) break;
	}
}

void nSoFibonacyiDauTien(int n){
	int f1 = 0, f2 = 1, fx = 0, i;
	if(n == 1) printf("%d", n);
	else{
		printf("1");
		for(i = 2;i <= n;i++){
		fx = f1 + f2;
		f1 = f2;
		f2 = fx;
		printf("%5d", fx);
	}
	}	
}

int main(){
	int n = nhap_n();
	nSoNtDauTien(n);
	printf("\n\n%d so Fibonaci la: \n\n", n);
	nSoFibonacyiDauTien(n);
	return 0;
}


