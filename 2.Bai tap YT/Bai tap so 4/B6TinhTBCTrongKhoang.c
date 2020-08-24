#include<stdio.h>
#include<math.h>
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d]: ", i); scanf("%d", &a[i]);
	}
}
void tbc(int a[], int n){
	int b, c, i, tong = 0, dem = 0;
	float tbc = 0;
	printf("Nhap vao 2 so b, c: "); scanf("%d%d", &b, &c);
	for(i = 0; i < n; i++){
		if(a[i] >= b && a[i] <= c){
			tong += a[i];
			dem++;
		}
	}
	tbc =(float)tong / dem;
	if(dem > 0)
		printf("Gia tri tbc cua cac pt trong khoang b, c la: %f", tbc);
	else printf("Khong co gia tri nao trong khoang!");
}
int main(){
	int a[100], n = 9;
	printf("Nhap mang co 9 phan tu: \n"); nhap_mang(a, n);
	tbc(a, n);
	return 0;
}


