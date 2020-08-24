#include<stdio.h>
#include<math.h>
int nhap_n(){
	int n;
	printf("Nhap so tu nhien n: "); scanf("%d", &n);
	return n;
}
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap a[%d]: ", i); scanf("%d", &a[i]);	
	}
}
void xuat_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d", a[i]);
		printf("\n");
	}
}
void gtln(int a[], int n){
	int i, max = a[0];
	for(i = 0; i< n; i++){
		if(max < a[i]) max = a[i];
	}
	printf("Gia tri lon nhat trong day la: %d", max);
}
int main(){
	int a[30], n;
	n = nhap_n();
	printf("Nhap mang %d so nguyen:\n ", n);
	nhap_mang(a, n);
	printf("Mang vua nhap la:\n");
	xuat_mang(a, n);
	gtln(a, n);
	return 0;
}


