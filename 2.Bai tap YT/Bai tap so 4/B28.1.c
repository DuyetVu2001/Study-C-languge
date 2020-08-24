#include <stdio.h>
#include <math.h>
#include <string.h>

void nhap_maTran(int a[50][50], int m, int n){//
	int i = 0, j = 0;
	for(; i < m; i++){
		for(j = 0; j < n; j++){
			printf("Nhap a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
			if(a[i][j] >= 100 || a[i][j] <= 0){
				printf("Gia tri ko thoa man! Moi nhap lai:\n");
				printf("Nhap a[%d][%d]: ", i, j);
				scanf("%d", &a[i][j]);
			}
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

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int a[50][50], int m, int n){//Sx tang
	int i = 0, j = 0, k = 0, l = 0;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			for(k = i; k < m; k++){				
				if(k == i){
					l = j + 1;
				}
				else{
					l = 0;
				}
				for(; l < n; l++){
					if(a[i][j] > a[k][l]){
						swap(&a[i][j], &a[k][l]);
					}
				}
			}
		}
	}
	printf("\nMa tran sau sap xep tang dan la: \n");
	xuat_maTran(a, m, n);
}

int main(){
	int a[50][50];
	int m = 4, n = 5;
	
	printf("Nhap ma tran A co gia tri tu 0 den 100: \n"); nhap_maTran(a, m, n);
	printf("\nMa tran A: \n"); xuat_maTran(a, m, n);
	sort(a, m, n);
	return 0;
}


