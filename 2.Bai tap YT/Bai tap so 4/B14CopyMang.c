#include<stdio.h>
#include<math.h>
void nhap_manga(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap a[%d]: ", i); scanf("%d", &a[i]);
	}
}
void nhap_mangb(int b[], int m){
	int i;
	for(i = 0; i < m; i++){
		printf("Nhap b[%d]: ", i); scanf("%d", &b[i]);
	}
}
void gop_mang(int a[], int b[], int n, int m){
	int i, p;
	do{
		printf("Nhap vi tri can chen mang b vao a: "); scanf("%d", &p);
	}while(p < 0 || p > n);
	int mn = n + m;
	for(i = p+m; i<=n+m-1; i++){
		a[i] = a[i-m];
	}
	for(i = 0; i < m; i++){
		a[p + i] = b[i];
	}
}
void xuat_mang_gop(int a[], int m, int n){
	int mn = n + m, i;
	printf("Mang a sau khi gop: \n");
	for(i = 0; i < mn; i++){
		printf("%d\n", a[i]);
	}
}
int main(){
	int a[30], b[30], n = 4, m= 2;
	printf("Nhap vao mang a:\n"); nhap_manga(a, n);
	printf("Nhap vao mang b:\n"); nhap_manga(b, m);
	gop_mang(a, b, n, m);
	xuat_mang_gop(a, n, m);
	return 0;
}
