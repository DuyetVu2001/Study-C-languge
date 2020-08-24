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
void tong(int a[],int n, int *tong2, int *tong3){
	int i;
	for(i=0; i<n; i++){
		if(a[i] % 2 == 0)
			*tong2 += a[i];
		if(a[i] % 3 == 0)
			*tong3 += a[i];
	}
}
void dem_so(int a[], int n){
	int dem = 0, i;
	for(i=0; i<n; i++){
		if(a[i] % 2 == 0 && a[i] > 5){
			dem++;
		}
	}
	printf("Dem = %d", dem);
}
void chen_so(int a[], int n){
	int x, k, i;
	printf("Nhap vao so nguyen x, k:"); scanf("%d%d", &x, &k);
	for(i = n; i>k; i--){
		a[i]=a[i-1];
	}
	a[k] = x;
	printf("Mang moi:\n");
	for(i=0; i<=n; i++){
		printf("%d\n", a[i]);
	}
}
int main(){
	int a[35], n, tong2 = 0, tong3 = 0;
	n = nhap_n();
	printf("Nhap mang co %d so nguyen.\n", n); nhap_mang(a, n);
	printf("Mang vua nhap: \n"); xuat_mang(a, n);
	tong(a, n, &tong2, &tong3);
	printf("Tong 2: %d\n", tong2);
	printf("Tong 3: %d\n", tong3);	
	dem_so(a,n);
	chen_so(a, n);
	return 0;
}


