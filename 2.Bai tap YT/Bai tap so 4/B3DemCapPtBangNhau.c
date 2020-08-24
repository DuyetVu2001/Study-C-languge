#include<stdio.h>
#include<math.h>
void nhap_mang(int a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap a[%d]: ", i); scanf("%d", &a[i]);
	}
}
void dem(int a[], int n){
	int i, dem = 0;
	for(i = 0; i < n; i++){
		if(a[i] == a[i+1]) dem++;
//		else if(a[i] == a[i+1] && a[i+1] == a[i+2]) dem += 2;
	}
	printf("So cap PT bang nhau la: %d", dem);
}
int main(){
	int a[100], n;
	printf("Nhap so tu nhien n: "); scanf("%d", &n);
	printf("Nhap mang %d so tu nhien: \n", n); nhap_mang(a, n);	
	dem(a, n);
	return 0;
}


