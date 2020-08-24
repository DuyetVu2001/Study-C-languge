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
int main(){
	int a[100], n = 9;
	printf("Nhap vao mang can sap xep:\n"); nhap_mang(a, n);
	sort(a, n);
	printf("Mang vua nhap sap xep theo thu tu tang dan: \n");
	xuat_mang(a, n);
	return 0;
}


