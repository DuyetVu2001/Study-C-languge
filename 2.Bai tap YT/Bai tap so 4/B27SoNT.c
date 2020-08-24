#include <stdio.h>
#include <math.h>
#include <string.h>

int kt_nt(int k){
	int i = 2;
	if(k < 2) return 0;
	for(; i < k; i++){
		if(k % i == 0) return 0;
	}
	return 1;
}

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
			printf("%-5d", a[i][j]);	
		}
		printf("\n\n");
	}
}

void inRaCacSoNT(int a[][50], int m, int n){
	int c[50][50] = {0};
	int i = 0, j = 0;
	for(; i < m; i++){
		for(j = 0; j < n; j++){
			if(kt_nt(a[i][j])){
				c[i][j] = 1;
			}
		}
	}
	printf("\nVi tri cac phan tu la so nguyen to: \n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if(c[i][j] == 0){
				printf("     ");
			}
			else{
				printf("%-5d", a[i][j]);
			}
		}
		printf("\n\n");
	}
}

int main(){
	int a[50][50];
	int m = 3, n = 3; //dong , cot
	printf("Nhap ma tran A: \n"); nhap_maTran(a, m, n);
	printf("\nMa tran A: \n"); xuat_maTran(a, m, n);
	inRaCacSoNT(a, m, n);
	return 0;
}


