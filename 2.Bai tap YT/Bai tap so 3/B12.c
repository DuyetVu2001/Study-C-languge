#include <stdio.h>
#include <math.h>

long kt_ngTo(long k){
	long i = 2;
	if(k < 2) return 0;
	for(; i < k; i++){
		if(k % i == 0) return 0;
	}
	return 1;
}

long tongChuSoCuaN(int n){
	int tong = 0;
	while(n){
		tong += n % 10;
		n /= 10;
	}
	if(kt_ngTo(tong)){
		return 1;
	}
	else return 0;
}

long dayKhongGiam(int n){//Cac chu so tu trai qua phai tao thanh day khong giam
	long k1, k2;
	int tang = 1; //bien kiem tra xem day co tang (1) ko
	k2 = n % 10;
	n = n / 10;
	while(n){
		k1 = n % 10;
		n /= 10;
		if(k2 < k1){
			tang = 0;
			break;
		}
		k2 = k1;
	}
	if(tang == 1) return 1;
	else return 0;
}

int main(){
	long i = 1000000;
	for(;i < 10000000; i++){
		if(kt_ngTo(i) && tongChuSoCuaN(i) && dayKhongGiam(i)){
			printf("%li", i);
			printf("\n");
		}
	}
	return 0;
}


