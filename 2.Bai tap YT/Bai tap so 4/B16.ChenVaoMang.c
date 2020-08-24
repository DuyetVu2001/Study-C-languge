#include<stdio.h>
#include<math.h>
void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap a[%d]: ", i); scanf("%d", &a[i]);
	}
}
void sort(int a[], int n){
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = i + 1; j < n; j++){
			if(a[i] > a[j])
				swap(&a[i], &a[j]);
		}
	}
}
void xuat_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d\n", a[i]);
	}
}
void chen_pt(int a[], int n){
	int x;
	
	scanf("%d", &x);
	a[n] = x;
	n++;
	printf("Mang moi sau khi chen:\n");
	sort(a, n);
	xuat_mang(a, n);
}
int main(){
	int a[100], n = 9;
	printf("Nhap vao mang can sap xep:\n"); nhap_mang(a, n);
	printf("Nhap vao gia tri can chen vao mang: ");
	chen_pt(a, n);
	return 0;
}


