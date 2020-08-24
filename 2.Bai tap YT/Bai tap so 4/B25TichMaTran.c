#include <stdio.h>
#include <math.h>
#include <string.h>

void nhap_maTran(int a[50][50], int m, int n){
	int i = 0, j = 0;
	for(; i < m; i++){
		for(j = 0; j < n; j++){
			printf("Nhap a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuat_maTran(int a[][50], int m, int n){
	int i = 0, j = 0;
	for(; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%5d", a[i][j]);	
		}
		printf("\n\n");
	}
}
int AxB(int a[50][50], int b[50][50], int m, int n, int k){
	int c[50][50];
	int i, j, l; //i so dong mt A, j so cot mt B, l so dong mt B
	for(i = 0; i < m; i++){
		for(j = 0; j < k; j++){
			for(l = 0; l < n; l++){
				c[i][j] += a[i][l] * b[l][j];
			}
		}
	}
	
	printf("Tich cua ma tran A x B: \n"); xuat_maTran(c, m, k);
}

int main(){
	int a[50][50], b[50][50];//ma tran A, B
	int m = 2;//So dong ma tran A
	int n = 3;//So cot ma tran A, so dong ma tran B
	int k = 2;//So cot ma tran B
	
	printf("Nhap ma tran A: \n"); nhap_maTran(a, m, n);
	printf("\nNhap ma tran B: \n"); nhap_maTran(b, n, k);
	printf("\nMa tran A: \n"); xuat_maTran(a, m, n);
	printf("\nMa tran B: \n"); xuat_maTran(b, n, k);
	AxB(a, b, m, n, k);
	return 0;
}


