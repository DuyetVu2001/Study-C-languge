#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float min(float a[], int n);
int nhap_n(){
	int n;
	do{
	printf("Nhap so nguyen duong 1<= n <=30: ");
	scanf("%d", &n);
	}while(n<1 || n>30);
	return n;
}
void nhap_mang(float a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("Nhap vao phan tu thu %d:", i+1);
		scanf("%f", &a[i]);
	}
}
void xuat_mang(float a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%.3f\n", a[i]);
	}
}
float minValue(float a[], int n){
	int i;
	float m=a[0];
	for(i=1; i<n; i++){
		if(a[i]<m) 
			m=a[i];
	}
	return m;
}
void tong_tbc(float a[], int n, float *tong, float *tbc){
	int i;
	float t;
	for(i=0; i<n; i++){
		t += a[i];
		*tong = t;
		*tbc = (float)t / n;
	}
}
int main(){
	int n;
	float min, tbc, tong;
	float a[35];
	n = nhap_n();
	printf("Nhap mang %d so thuc\n", n); nhap_mang(a, n);
	printf("Mang vua nhap la:\n"); xuat_mang(a, n);
	min = minValue(a, n);
	printf("Gia tri nho nhat la: %.3f\n", min);
	tong_tbc(a, n, &tong, &tbc);
	printf("Tong la: %.3f\n", tong);
	printf("TBC la: %.3f", tbc);
	return 0;
}



