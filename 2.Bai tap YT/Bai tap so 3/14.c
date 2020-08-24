#include <stdio.h>
#include <math.h>

long kt_nt(long n){
	long i = 2;
	if(n < 2) return 0;
	for(; i < n; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

long tatCaChuSoLaNt(long n){//Kt tat ca cac chu so deu la so NT
	long k;
	while(n){
		k = n % 10;
		if(kt_nt(k) == 0){
			return 0;
		}
		n /= 10;
	}
	return 1;
}

long daoLaSoNt(long n){
	long k;
	while(n){
		k = k * 10 + n % 10;
		n /= 10;
	}
	if(kt_nt(k)) return 1;
	else return 0;
}

int main(){
	long i = 100000;
	for(; i < 1000000; i++){
		if(kt_nt(i) && tatCaChuSoLaNt(i) && daoLaSoNt(i)){
			printf("%li", i);
			printf("\n");
		}
	}
	return 0;
}


