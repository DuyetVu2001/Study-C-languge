#include<stdio.h>
#include<math.h>
int main(){
	int n, i;
	unsigned long sum = 0, giaiThua = 1;	
	printf("Nhap vao so nguyen duong n: ");
	scanf("%d", &n);
	
	for( i = 1; i <= n; i++){
		giaiThua *= i;
		sum += giaiThua;
	}
	printf("SUM = %ld ", sum); 
	return 0;
}


