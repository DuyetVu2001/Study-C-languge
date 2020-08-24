#include<stdio.h>
int main(){
	int n, i;
	int dem = 0;
	scanf("%d", &n);
	for( i = 1; i <= n; i ++ ){
		if( n%i == 0){
			printf("%5d", i);
			++dem;
		}
	}
	printf("\nSo uoc cua n la: %d", dem);

	return 0;
}


