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

void maTranChuyenVi(int a[50][50], int b[50][50], int m, int n){
	int i = 0, j = 0;
	for(; i < m; i++){
		for(j = 0; j < n; j++){
			b[j][i] = a[i][j];
		}
	}
}

void AxB(int a[50][50], int b[50][50], int m, int n){
	int c[50][50];
	int i, j, l; //i so dong mt A, j so cot mt B, l so dong mt B
	for(i = 0; i < m; i++){
		for(j = 0; j < m; j++){
			for(l = 0; l < n; l++){
				c[i][j] += a[i][l] * b[l][j];
			}
		}
	}
	printf("\nMa tra C = A x B la: \n");
	xuat_maTran(c, m, m);
}

int main(){
	int a[50][50], b[50][50];
	int m = 2, n = 3;
	
	printf("Nhap ma tran A: \n"); nhap_maTran(a, m, n);
	printf("\nMa tran A: \n"); xuat_maTran(a, m, n);
	maTranChuyenVi(a, b, m, n);
	printf("\nMa tran B: \n"); xuat_maTran(b, n, m);
	AxB(a, b, m, n);
	
	return 0;
}


