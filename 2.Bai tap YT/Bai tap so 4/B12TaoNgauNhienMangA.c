#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void nhap_mang_rand(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		a[i] = rand()%10;
	}
}
void xuat_so_khac_nhau(int a[], int n){
	int i, j, dem;
	for(i = 0; i < n; i++){
		dem = 1;
		for(j = 0; j < i; j++){
			if(a[j] == a[i]){
				dem = 0;
				break;
			}		
		}
		if(dem){
			printf("%d\n", a[i]);
		}
	}
}
void xuat_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d\n", a[i]);
	}
}
int main(){
	int a[100], n = 10;
	nhap_mang_rand(a, n);
	printf("Mang sinh so ngau nhien: \n"); xuat_mang(a, n);
	printf("Mang so khac nhau: \n");
	xuat_so_khac_nhau(a, n);
	return 0;
}


