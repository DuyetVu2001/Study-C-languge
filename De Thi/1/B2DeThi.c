#include<stdio.h>
#include<math.h>
int nhap_n(){
	int n;
	do{
		printf("Nhap so nguyen n thoa man 5 <= n <= 30: "); scanf("%d", &n);
	}while(n<5 || n>30);
	return n;
}
void nhap_mang(int a[], int n){
	int i;
	a[0] = 31;
	for(i = 1; i < n; i++){
		a[i] = n*i*i;
	}
}
void xuat_mang(int a[], int n){
	int i;
	printf("A[0]=31\n");
	for(i = 1; i < n; i++){
		printf("A[%d]=%d\n", i, a[i]);
	}
}
void tinh_tbc(int a[], int n){
	int i, dem = 0, t = 0;
	double tbc = 0;
	for(i = 0; i < n; i++){
		if(a[i]%2==1 && a[i]%n==0){
			t += a[i];
			dem++;
		}
	}
	if(dem > 0){
		tbc = (double)t/dem;
		printf("Trung binh cong cua cac so le chia het cho n la: %lf", tbc);
	}
	else printf("Khong co so thoa man!");
}
int main(){
	int a[35], n;
	n = nhap_n();
	nhap_mang(a, n);
	printf("Mang %d so nguyen:\n", n);
	xuat_mang(a, n);
	tinh_tbc(a, n);
	return 0;
}


