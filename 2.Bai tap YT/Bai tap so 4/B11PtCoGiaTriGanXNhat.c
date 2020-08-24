#include<stdio.h>
#include<math.h>
void nhap_mang(int a[], int n, int *x){
	int i;
	for(i = 0; i < n; i++){
		printf("a[%d]: ", i); scanf("%d", &a[i]);
	}
	printf("Nhap x: \n"); scanf("%d", x);
}
int min_x(int a[], int n, int x){
	int i;
	int min = abs(x - a[0]);
	for(i = 1; i < n; i++){
		if(min > abs(x - a[i]))
			min = abs( x - a[i]);
	}
	return min;
}
void nearX(int a[], int n, int x){
	int i;
	for(i = 0; i < n; i++){
		if(abs(x - a[i]) == min_x(a, n, x)){
			printf("a[%d]\t", i);
		}
	}
}
int main(){
	int a[100], n = 9, x;
	printf("Nhap vao mang so nguyen co %d phan tu:\n", n);
	nhap_mang(a, n, &x);
	printf("Chi so co gia tri gan x nhat: ");
	nearX(a, n, x);
	return 0;
}


