#include<stdio.h>
#include<math.h>
int nhap_n(){
	int n;
	do{
		printf("Nhap so ND n thoa man 1<= n <= 30: "); scanf("%d", &n);
}	while(n<1 || n>30);
	return n;
}
void hien_thi_mang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d", a[i]);
		printf("\n");
	}
}
int nt(int k){
	int i = 2;
	while(i <= k/2){
		if(k % i == 0) return 0;
		++i;
	}
	return 1;
}
void tao_mang_snt(int a[], int n){
	int i = 0, k = 2;
	while(i<n){
		if(nt(k) == 1){
			a[i] = k;
			i++;
		}
		k++;
	}
}
int main(){
	int a[35], n;
	n = nhap_n();
	tao_mang_snt(a, n);
	printf("Mang %d snt:\n", n);
	hien_thi_mang(a, n);
	return 0;
}


