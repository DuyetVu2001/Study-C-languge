#include<iostream>
using namespace std;

void nhap(int a[][50], int &m, int &n){
	scanf("%d%d", &m, &n);
	
	for(int i = 0; i< m; i++){
		for(int j = 0; j< n; j++){
			printf("a[%d][%d] = \n", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuat(int a[][50], int m, int n){

	for(int i = 0; i< m; i++){
		for(int j = 0; j< n; j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}

void chuyenVi(int a[][50], int b[50][50], int m, int n){
	for(int i=0; i<n; i++)
         for(int j=0; j<m; j++)
         {
             b[i][j]=a[j][i];
         }
     printf("\nMa tran chuyen vi la: \n");
     xuat(b,n,m);
}

int main(){
	int a[50][50],b[50][50], m, n;
	
	nhap(a,m,n);
	printf("\nMa tran A: \n");
	xuat(a,m,n);
	
	chuyenVi(a,b,m,n);
	
	return 0;
}
