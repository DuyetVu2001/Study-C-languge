#include<stdio.h>
#include<math.h>
#define N 100

void input_matrix(int a[N][N], int n, int m);
void output_matrix(int a[N][N], int n, int m);
void find_max(int a[N][N], int n, int m);
void find_min(int a[N][N], int n, int m);

int main(){
	int a[N][N];
	int n, m;
	printf("Nhap lan luot so hang so cot: ");
	scanf("%d%d", &n, &m);
	input_matrix(a, n, m);
	output_matrix(a, n, m);
	find_max(a, n, m);
	find_min(a, n, m);
	return 0;
}

void input_matrix(int a[N][N], int n, int m){
	printf("Nhap ma vao ma tran: \n");
	int i , j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("Nhap a[%d][%d]: ", i, j); scanf("%d", &a[i][j]);
		}
	}
}
void output_matrix(int a[N][N], int n, int m){
	printf("Ma tran: \n");
	int i , j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d", a[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}
void find_max(int a[N][N], int n, int m){
	int i , j;
	int max = a[0][0];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(max < a[i][j]){
				max = a[i][j];
			}
		}
	}
	printf("\nGia tri lon nhat la: %d\n", max);
	printf("Tai vi tri: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(max == a[i][j]){
				printf("a[%d][%d]\t", i, j);
			}
		}
	}
}
void find_min(int a[N][N], int n, int m){
	int i , j;
	int min = a[0][0];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(min > a[i][j]){
				min = a[i][j];
			}
		}
	}
	printf("Gia tri nho nhat la: %d\n", min);
	printf("Tai vi tri: \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(min == a[i][j]){
				printf("a[%d][%d]\t", i, j);
			}
		}
	}
}



