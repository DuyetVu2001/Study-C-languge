#include<stdio.h>
int main(){
	int n, i;
	printf("Nhap vao so tu nhien n: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		if( i % 2 == 0)
		printf("\nSo chan nho hon n la: %d", i);
	}
	for(i = 0; i < n; i++){
		if( i % 2 == 1)
		printf("\nSo le nho hon n la: %d", i);
	}
	return 0;
}


