#include<stdio.h>
int triple(int soHang){
	return 3 * soHang;
}
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	printf("\nChu so gap 3 lan n la: %d", triple(n));
	return 0;
}

