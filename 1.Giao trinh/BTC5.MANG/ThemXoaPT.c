#include<stdio.h>
#include<math.h>
int nhap_n(){
	int n;
	do{
		printf("Nhap so nguyen n (1<n<=30):"); scanf("%d", &n);
	}while(n<2 || n>30);
	return n;
}
void nhap_mang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("Nhap so nguyen thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
}
void xuat_mang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d", a[i]);
		printf("\n");
	}
}
int main(){
	int a[35], n;
	n = nhap_n();
	printf("Nhap mang co %d so nguyen.\n", n); nhap_mang(a, n);
	printf("Mang vua nhap: \n"); xuat_mang(a, n);
	return 0;
}


