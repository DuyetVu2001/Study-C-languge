#include<stdio.h>
#include<math.h>
int nhap_n(){
	int n;
	do{
		printf("Nhap so ND n thoa man 1<= n <= 30: "); scanf("%d", &n);
}	while(n<1 || n>30);
	return n;
}
void nhap_mang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("Nhap so nguyen duong thu %d:", i+1);
		scanf("%d", &a[i]);
	}
}
void xuat_mang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d\t\n", a[i]);
	}
}
int maxValue(int a[], int n){
	int i;
	int m = a[0];
	for(i=1; i<n; i++){
		if(m<a[i]) m = a[i];
	}
	return m;
}
void tong_tbc(int a[], int n, int *tong, float *tbc){
	int i, t = 0, dem=0;
	for(i=0; i<n; i++){
		if(a[i]%2==0){
			t += a[i];
			*tong = t;
			dem++;
		}
	}
	if(dem>0){
		*tbc = (float)*tong/dem;
	}
}
int main(){
	int a[35], n, max, tong;
	float tbc;
	n = nhap_n();
	printf("Nhap mang %d so nguyen duong!\n", n);
	nhap_mang(a, n);
	printf("Mang vua nhap:\n");
	xuat_mang(a, n);
	max = maxValue(a, n);
	printf("Gia tri lon nhat cua day la: %d\n", max);
	tong_tbc(a, n, &tong, &tbc);
	printf("Tong so hang chan trong day la: %d\n", tong);
	printf("Tbc so hang chan trong day la: %.3f", tbc);
	return 0;
}


