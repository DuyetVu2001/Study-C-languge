#include<stdio.h>
#include<math.h>
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d]: ", i); scanf("%d", &a[i]);
	}
}
int tim_x(int a[], int n, int x){
	int i, dem = 0;
	for(i = 0; i <  n; i++){
		if(a[i] == x) dem++;
	}
	return dem;
}
int main(){
	int a[100], n, x;
	printf("Nhap vao so phan tu cua mang: "); scanf("%d", &n);
	printf("Nhap mang: \n"); nhap_mang(a, n);
	printf("Nhap vao so can tim: \n"); scanf("%d", &x);
	if(tim_x(a, n, x) == 0) printf("Mang khong co so %d!\n", x);
	else printf("So %d xuat hien %d lan.", x, tim_x(a, n, x));
	return 0;
}


