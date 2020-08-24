#include <stdio.h>
#include <math.h>
#include <string.h>
void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sx(int a[50][50]){
	swap(&a[0][0], &a[2][1]);
}
void xuat_maTran(int a[][50]){
	int i = 0, j = 0;
	for(; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%-5d", a[i][j]);	
		}
		printf("\n\n");
	}
}
int main(){
	int a[50][50] = {{1,2,3},{4,5,6}, {7,8,9}};
	sx(a);
	xuat_maTran(a);
	return 0;
}


