#include <stdio.h>
#include <math.h>

long kt_thuanNghich(long n){
	long kt = n;
	long k = 0;
	while(n){
		k = k * 10 + n % 10;
		n /= 10;
	}
	if(k == kt) return 1;
	else return 0;
}

long kt(long n){//Kiem tra n co chi chua cac chu so 0, 6, 8
	long k = 0;
	int dem0 = 0, dem6 = 0, dem8 = 0;
	while(n){
		k = n % 10;
		if(k == 0) dem0++;
		else if(k == 6) dem6++;
		else if(k == 8) dem8++;
		n /= 10;
	}
	if(dem0 && dem6 && dem8) return 1;
	else return 0;
}

long tong_chia_het_10(long n){//Kt tong cac chu so chia het cho 10
	long tong = 0;
	while(n){
		tong += n % 10;
		n /= 10;
	}
	if(tong % 10 == 0) return 1;
	else return 0;
}

int main(){
	long i = 1000000;
	for(; i < 100000000; i++){
		if(kt_thuanNghich(i) && kt(i) && tong_chia_het_10(i)){
			printf("%li", i);
			printf("\n");
		}
	}
	return 0;
}


