#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

bool kiemTraSoNT(int n){
	int i = 2;
	if(n < 2) return false;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int n, i, dem = 0;
	printf("Nhap vao so nguyen duong n: ");
	scanf("%d", &n);
	printf("Cac uoc so cua %d la: \n", n);
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%5d", i);
			dem++;
		}
	}
	
	printf("\nSo %d co %d uoc.\n", n, dem);
	printf("\nCac uoc cua %d la so NT la: \n", n);
	for(i = 2; i <= n; i++){
		if(n % i == 0 && kiemTraSoNT(i) == 1){
			printf("%5d", i);
		}
	}
	
	return 0;
}


