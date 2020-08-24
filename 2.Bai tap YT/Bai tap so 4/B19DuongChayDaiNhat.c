#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void nhap_mang(int* a, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap [%d]: ", i); scanf("%d", &a[i]);
	}
}
void farMax(int *a, int n){
	int i, max = 1, dem = 1, index;
	for(i = 0; i < n - 1; i++){
		if(a[i] <= a[i+1]){
			dem++;  
		}
		else{
			if(max < dem){
				max = dem;
				index = i - dem + 1;
			}
			dem = 1;
		}
	}
	printf("Duong chay dai nhat la: %d\nVi tri dau tien cua day la: a[%d]", max, index);
}
int main(){
	int a[100];
	int n = 9;
	printf("Nhap mang gom 9 so nguyen:\n"); nhap_mang(a, n);
	farMax(a, n);
	return 0;
}


