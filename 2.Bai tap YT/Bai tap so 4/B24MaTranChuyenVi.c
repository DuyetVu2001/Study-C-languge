#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void matrix_in(int a[100][100], int n, int m){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("Nhap a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}
void matrix_out(int a[100][100], int n, int m){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%4d", a[i][j]);
		}
		printf("\n\n");
	}
}
void maTranChuyenVi(int a[100][100], int b[100][100], int n, int m){
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			b[i][j] = a[j][i];
		}
	}
	printf("Ma tran chuyen vi B cua A la: \n");
	matrix_out(b, m, n);
}
int main(){
	int a[100][100], b[100][100];
	int n, m;
	printf("Nhap vao lan luot so hang n va so cot m: "); scanf("%d%d", &n, &m);
	matrix_in(a, n, m);
	printf("Ma tran vua nhap: \n"); matrix_out(a, n, m);
	maTranChuyenVi(a, b, n, m);
	return 0;
}


