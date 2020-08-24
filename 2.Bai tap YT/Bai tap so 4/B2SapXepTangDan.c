#include<stdio.h>
#include<math.h>
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap a[%d]: ", i); scanf("%d", &a[i]);
	}
}
void sap_xep(int a[], int n){
	int i, j, tmp = 0;
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(a[i] > a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void xuat_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d", a[i]);
		printf("\n");
	}
}
int main(){
	int a[100], n;
	printf("Nhap so tu nhien n: "); scanf("%d", &n);
	printf("Nhap mang %d so tu nhien: \n", n); nhap_mang(a, n);
	sap_xep(a, n);
	printf("Mang sau khi sap xep theo thu tu tang dan la: ");
	xuat_mang(a, n);
	return 0;
}


