#include<stdio.h>
#include<math.h>
void nhap_mang(double a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("Nhap phan tu thu %d:", i+1); scanf("%lf", &a[i]);
	}
}
void xuat_nguoc(double a[], int n){
	int i;
	for(i=n-1; i>=0; i--){
		printf("%.3lf", a[i]);
		printf("\n");
	}
}
void tim_so(double a[], int n){
	double x;
	int i, dem = 0;
	printf("Nhap vao so thuc x can tim: "); scanf("%lf", &x);
	for(i = 0; i < n; i++){
		if(a[i] == x)
			dem++;
	}
	if(dem >= 1){
		printf("So %.2lf co xuat hien!\nXuat hien %d lan!\n", x, dem);
		for(i = 0; i < n; i++){
			if(x == a[i])
			printf("Tai vi tri %d\n", i+1);
}}
	else printf("So %lf khong xuat hien!\n", x);
}
void xoa_phan_tu(double a[], int n){
	int k, i;
	printf("Nhap vao vi tri can xoa: "); scanf("%d", &k);
	if(1<=k && k<=n){
		for(i=n-k; i<n-1; i++){
			a[i] = a[i+1];
		}
		n--;
		printf("Mang moi:\n");
		for(i=n-1; i>=0; i--)
			printf("%lf\n", a[i]);
	}
	else printf("Sai gia tri!!");
}
int main(){
	int n;
	double a[55];
	printf("Nhap n:"); scanf("%d", &n);
	printf("Nhap mang %d so thuc!\n", n);
	nhap_mang(a, n);
	printf("Hien thi mang nguoc:\n");
	xuat_nguoc(a, n);
	tim_so(a, n);
	xoa_phan_tu(a, n);
	return 0;
}


