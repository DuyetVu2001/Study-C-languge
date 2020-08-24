
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int kiemTraSoNT(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i < n; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int main(){
	int a, b, i;
	printf("Nhap vao hai so nguyen duong a, b(a <= b): ");
	scanf("%d%d", &a, &b);
	
	printf("\nCac so nguyen to trong khoang a, b la: \n");
	for(i = a; i < b; i++){
		if(kiemTraSoNT(i) == 1){
			printf("%5d", i);
		}
	}
	return 0;
}


