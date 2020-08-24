#include<stdio.h>
#include<math.h>
int nhap_n(){
	int n;
	printf("Nhap n: "); scanf("%d", &n);
	return n;
}
int nt(int k){
	int i;
	for(i=2; i<k; i++){
		if(k % i == 0) return 0;
	}
	return 1;
}
void soNt(int a[], int n){
	int i = 0, k = 2;
	for(i=0; i<n;){
		if(nt(k) == 1){
			a[i] = k;
			i++;
		}
		++k;
	}	
}
void xuat(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d\n", a[i]);
	}
}
int main(){
	int a[30], n;
	n = nhap_n();
	soNt(a, n);
	printf("Day %d so nguyen to: \n", n);
	xuat(a, n);
	return 0;
}


