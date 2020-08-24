#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int kt_NT(int n){
	int i;
	if(n < 2) return 0;
	for(i = 2; i < sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int kt_ND(int n){
	int m = n, k = 0;
	
	while(m != 0){
		k = k * 10 + m % 10;
		m /= 10;	
	}
	
	if(k == n) return 1;
	return 0;	
}

int kt_so_khac4(int n){
	int m = n, k = 0;
	while(m != 0){
		k = m % 10;
		if(k == 4) return 0; //Neu k = 4 thi loai
		m /= 10;
	}
	return 1;
}

int main(){
	int i;
	printf("So vua la NT, thuan nghich va khong chua so 4 la:\n");
	printf("Nho de che do hieu nang cao!!\n");
	for(i = 10000; i < 10000000; i++){
		if(kt_NT(i) && kt_ND(i) && kt_so_khac4(i)){
			printf("%d\n", i);
		}
	}	
	return 0;
}


