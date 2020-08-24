#include<stdio.h>
#include<math.h>
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap a[%d]: ", i); scanf("%d", &a[i]);
	}
}
void xuat_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d\n", a[i]);
	}
}
void kiem_tra(int a[], int n){
	int i, dem = 1;
	for(i = 0; i < n; i++){
		if(a[i] > a[i+1] || a[i] == a[i+1]){
			printf("Phan tu lam mat tinh tang dan cua mang la: \n");
			printf("a[%d]: %d", i+1, a[i+1]);
			dem = 0;
			break;
		}
		
	}
	if(dem){
		printf("Mang da duoc sap xep theo thu tu tang dan.");
	}
}
int main(){
	int a[100], n = 5;
	printf("Nhap vao mang can kiem tra:\n"); nhap_mang(a, n);
	printf("Mang vua nhap:\n"); xuat_mang(a, n);
	kiem_tra(a, n);
	return 0;
}
